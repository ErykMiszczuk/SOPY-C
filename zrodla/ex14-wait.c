#include <stdio.h>
#include <unistd.h>

int main()
{
/*	int status; */

	if (fork()==0)
	{
	printf("Proces potomny\n");
	execl("/bin/ls","ls","-l",NULL);
	}
	else
	{
	printf("Proces macierzysty poczatek\n");
/*	wait(&status);  */
	printf("Proces macierzysty koniec\n");
	}
	return 0;
}
