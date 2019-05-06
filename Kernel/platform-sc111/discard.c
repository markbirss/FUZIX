#include <kernel.h>
#include <kdata.h>
#include <printf.h>
#include <devtty.h>
#include <blkdev.h>
#include "config.h"
#include <z180.h>

void init_hardware_c(void)
{
    ramsize = 512;
    procmem = 512 - 64;
    /* zero out the initial bufpool */
    memset(bufpool, 0, (char*)bufpool_end - (char*)bufpool);

    kputs("Hold onto your hat...");
    /* Most boards use 55ns SRAM: that needs 2 wait states. 45ns would need
       1 but is rarer. Use max wait states for I/O for the moment */
    Z180_DCNTL |= 0xF0;		/* Force slow as possible, then mod back */
    Z180_DCNTL &= 0xBF;		/* 2 wait memory, 4 on I/O */
    Z180_RCR &= 0x7F;		/* No DRAM, kill refresh */
    Z180_CCR &= 0x7F;		/* Clock divider off */
    Z180_CMR |= 0x80;		/* Clock doubler on */
    kputs("turbo engaged, 36.8MHz.\n");
}

void pagemap_init(void)
{
    int i;

    /* RC2014 has RAM in the top 512K of physical memory. 
     * First 64K is used by the kernel. 
     * Each process gets the full 64K for now.
     * Page size is 4KB. */
    for(i = 0x90; i < (1024 >> 2); i += 0x10)
        pagemap_add(i);
}

void map_init(void)
{
    /* clone udata and stack into a regular process bank, return with common memory
       for the new process loaded */
    copy_and_map_process(&init_process->p_page);
    /* kernel bank udata (0x300 bytes) is never used again -- could be reused? */
}

uint8_t platform_param(char *p)
{
    used(p);
    return 0;
}

/*
 *	This function is called for partitioned devices if a partition is found
 *	and marked as swap type. The first one found will be used as swap. We
 *	only support one swap device.
 */
void platform_swap_found(uint8_t letter, uint8_t m)
{
	blkdev_t *blk = blk_op.blkdev;
	uint16_t n;
	if (swap_dev != 0xFFFF)
		return;
	letter -= 'a';
	kputs("(swap) ");
	swap_dev = letter << 4 | m;
	n = blk->lba_count[m - 1] / SWAP_SIZE;
	if (n > MAX_SWAPS)
		n = MAX_SWAPS;
#ifdef SWAPDEV
	while (n)
		swapmap_init(n--);
#endif
}
