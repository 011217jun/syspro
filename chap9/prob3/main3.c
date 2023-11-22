#include <stdio.h>
int main(int argc, char *argv[])

{

   int child, pid, status;

   pid = fork( );

   if (pid == 0) { 

      execvp(argv[1], &argv[1]);

      fprintf(stderr, "%s:not start\n",argv[1]);

   } else { 

      child = wait(&status);

      printf("[%d] child process %d enter \n", getpid(), pid);

      printf("\t enter code %d \n", status>>8);

   }

}


