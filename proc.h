#ifndef proc_h
#define proc_h
struct proc{
  int num;
  int bytes;
  struct proc *next;
};
struct proc* init_PROC(int num,int bytes);
int insert_PROC(struct proc **head,struct proc *nproc);
#endif
