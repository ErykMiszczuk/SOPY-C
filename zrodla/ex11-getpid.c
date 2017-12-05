#include <stdio.h>
main()

{
int pid;
	if((pid=fork())==0)
	printf("Proces potomny PID=%d, proces macierzysty PID=%d\n",getpid(),getppid());
        else
	printf("Proces macierzysty PID=%d, proces maierzysty macierzystego PID=%d\n",getpid(),getppid());
}
