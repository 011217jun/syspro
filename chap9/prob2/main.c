#include <sys/types.h>
int main()

{

   int pid, child, status;

   printf("[%d] parents process start \n", getpid( ));

   pid = fork();

   if (pid == 0) {

      printf("[%d] child process start \n", getpid( ));

      exit(1);

   }

   child = wait(&status); 

   printf("[%d] child process %d enter \n", getpid(), child);

   printf("\tenter code %d\n", status>>8);

}


