#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]){
  int total_mem;
  char alg;
  extern char *optarg;
  //command line parsing
  while(1){
    int opt = getopt(argc,argv,"s:fbw:");
    if(opt == -1){break;}

    switch(opt){
      case 's':
        total_mem = atoi(optarg);
        break;
      case 'f':
        alg = 'f';
        break;
      case 'b':
        alg = 'b';
        break;
      case 'w':
        alg= 'b';
        break;
    }
  }
  

}
