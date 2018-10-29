#include "proc.h"
#include <stdlib.h>

struct proc* init_PROC(int num,int bytes){
  struct proc *proc = (struct proc*) malloc(sizeof(proc));
  proc->num = num;
  student->bytes = bytes;
  return proc;
}
