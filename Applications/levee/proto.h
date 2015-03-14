/*                                     
** levee function prototypes           
** (generated by cl -Gms -Ox -nologo -I../tools -Zg)  
*/                                     
#ifndef _PROTO_D                       
#define _PROTO_D                       
char  *PROC badccl(char  *src);
char  *PROC class(char  c);
char  *PROC dodash(char  *src);
char  *PROC findbounds(char  *ip);
char  *PROC findparse(char  *src,int  *idx,int  start);
char  *PROC getarg(void);
char  *PROC getname(void);
char  *PROC makepat(char  *string,char  delim);
char  *PROC search(char  *pat,int  *start);
char  *basename(char  *s);
char  *glob(char  *path,struct  glob_t *dta);
char  PROC editcore(void);
char  PROC esc(char  * *s);
char  PROC findCP(int  curp,int  *newpos,char  cmd);
char  PROC line(char  *s,int  start,int  endd,int  *size);
char  PROC peekc(void);
char  PROC readchar(void);
int  PROC REmatch(char  *pattern,int  start,int  end);
int  PROC addarg(char  *name);
int  PROC addfile(FILE *f,int  start,int  endd,int  *size);
int  PROC adjuster(int  sleft,int  endd,int  sw);
int  PROC ahead(int  i);
int  PROC allowintr(void);
int  PROC amatch(char  *pattern,char  *start,char  *endp);
int  PROC args(void);
int  PROC back(int  i);
void PROC back_up(char  c);
int  PROC backup(char  *name);
int  PROC bchar(int  pos,int  npos);
int  PROC bigreplace(void);
int  PROC bseekeol(int  origin);
int  PROC cclass(unsigned char  c);
int  PROC chop(int  start,int  *endd,int  visual,int  *query);
int  PROC clrmsg(void);
int  PROC clrprompt(void);
int  PROC concatch(char  c);
int  PROC copyover(struct  undostack *save_undo,int  *curp);
int  PROC cutandpaste(void);
int  PROC delete_to_undo(struct  undostack *u,int  start,int  lump);
int  PROC deletion(int  low,int  high);
int  PROC do_file(char  *fname,char  *mode,int  *noquit);
int  PROC doaddwork(char  *token,int  *argcp,char  * * *argvp);
int  PROC docommand(char  cmd);
int  PROC doinput(char  *name);
int  PROC doins(int  flag);
int  PROC doyank(int  low,int  high);
int  PROC editfile(void);
int  PROC errmsg(char  *msg);
int  PROC error(void);
int  PROC exec(char  *cmd,char  *mode, int *noquit);
int  PROC execmode(char  emode);
int  PROC exmacro(void);
int  PROC expandargs(char  *name,int  *argcp,char  * * *argvp);
int  PROC fchar(int  pos,int  npos);
int  PROC findDLE(int  start,int  *endd,int  limit,int  dle);
int  PROC findarg(char  *name);
int  PROC findback(char  *pattern,int  start,int  endp);
int  PROC findcol(int  ip,int  col);
int  PROC findfwd(char  *pattern,int  start,int  endp);
int  PROC fixcore(int  *topp);
void PROC fixmarkers(int  base,int  offset);
int  PROC fixupline(int  dft);
int  PROC format(char  *out,unsigned short  c);
int  PROC fseekeol(int  origin);
int  PROC gcount(void);
int  PROC getKey(void);
int  PROC getcontext(char  c,int  begline);
int  PROC getline(char  *str);
void PROC initialize(int  count,char  * *args);
int  PROC inputf(char  *fname,int  newbuf);
int  PROC insert_to_undo(struct  undostack *u,int  start,int  size);
int  PROC insertion(int  count,int  openflag,int  *dp,int  *yp,int  visual);
int  PROC insertmacro(char  *cmdstr,int  count);
int  PROC join(int  count);
int  PROC killargs(int  *argcp,char  * * *argvp);
int  PROC locate(char  *pattern,char  *linep);
int  PROC lookup(char  c);
int  PROC macrocommand(void);
int  PROC makedest(char  *str,int  start,int  ssize,int  size);
int  PROC map(int  insert);
int  PROC match(int  p);
int  PROC max(int  a,int  b);
int  PROC min(int  a,int  b);
int  PROC move_to_undo(struct  undostack *u,int  start,int  lump);
int  PROC movearound(char  cmd);
int  PROC moveleft(char  *src,char  *dest,int  length);
int  PROC moveright(char  *src,char  *dest,int  length);
int  PROC moveword(int  cp,int  forwd,int  toword);
int  PROC mvcur(int  y,int  x);
int  PROC nextfile(int  prev);
int  PROC nextline(int  advance,int  dest,int  count);
int  PROC nointr(void);
int  PROC numtoa(char  *str,int  num);
int  PROC ok_to_scroll(int  top,int  bottom);
int  PROC oktoedit(int  writeold);
int  PROC omatch(char  *pattern,char  * *cp,char  *endp);
int  PROC outputf(char  *fname);
int  PROC parse(char  *inp);
int  PROC patsize(char  * *pattern);
int  PROC plural(int  num,char  *string);
int  PROC popblock(struct  undostack *u);
int  PROC popmem(struct  undostack *u,int  start,int  size);
int  PROC popw(struct  undostack *u,int  *i);
int  PROC print(void);
int  PROC printall(void);
int  PROC printch(char  c);
int  PROC printi(int  num);
int  PROC println(void);
int  PROC printone(int  i);
int  PROC prints(char  *s);
int  PROC prompt(int  toot,char  *s);
int  PROC pushblock(struct  undostack *u);
int  PROC pushmem(struct  undostack *u,int  start,int  size);
int  PROC pushw(struct  undostack *u,int  i);
int  PROC put(int  before);
int  PROC putback(int  start,int  *newend);
int  PROC putfile(FILE *f,int  start,int  endd);
int  PROC putin(struct  undostack *save_undo,int  *curp);
int  PROC readfile(void);
int  PROC redisplay(int  flag);
int  PROC refresh(int  y,int  x,int  start,int  endd,int  rest);
void PROC resetX(void);
int  PROC scan(int  length,char  tst,char  ch,char  *src);
int  PROC scroll(int  down);
int  PROC scrollback(int  curr);
int  PROC scrollforward(int  curr);
int  PROC sentence(int  start,int  forwd);
int  PROC setX(int  cp);
int  PROC setY(int  cp);
int  PROC setcmd(void);
void PROC setend(void);
void PROC setpos(int  loc);
int  PROC settop(int  lines);
int  PROC skip(char  *chars,int  cp,int  step);
int  PROC skipws(int  loc);
int  PROC squiggle(int  endp,char  c,int  dorepl);
int  PROC stamp(char  *s,char  *template);
int  PROC strput(char  *s);
void PROC swap(int  *a,int  *b);
int  PROC takeout(struct  undostack *save_undo,int  *curp);
int  PROC to_index(int  line);
int  PROC to_line(int  cp);
int  PROC toedit(int  count);
int  PROC tow(int  cp,int  step);
int  PROC undefine(int  i);
int  PROC unmap(void);
int  PROC uputcmd(struct  undostack *u,int  size,int  start,char  cmd);
int  PROC version(void);
int  PROC whatline(void);
void PROC wr_stat(void);
int  PROC writefile(void);
int  PROC writeline(int  y,int  x,int  start);
int  PROC zdraw(char  code);
int  PROC zerostack(struct  undostack *u);
void main(int  argc,char  *argv[]);
void PROC initcon(void);
void PROC fixcon(void);
#endif  /*_PROTO_D*/                   
