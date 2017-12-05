#include <stdio.h> 

main()
{

int pid;

if((pid=fork())==0)
  printf("proces potomny, nr %d \n",pid);
else
  printf("proces macierzysty, nr %d \n",pid);
}

