#include "proc.h"
#include <stdlib.h>

struct proc* init_PROC(int num,int bytes){
  struct proc *proc = (struct proc*) malloc(sizeof(proc));
  proc->num = num;
  proc->bytes = bytes;
  proc->next = NULL;
  return proc;
}

int insert_PROC(struct proc **head,struct proc *nproc){
	struct proc *cur = *head;
	struct proc *prev = NULL;

	while(cur!=NULL){
		prev = cur;
		cur = cur->next;
	}

	prev->next = nproc;
	return 1;
}
