#include <stdio.h>
#include <unistd.h>

main()
{
	int pid, fd, i;
	char nazwa[80];
	char sciezka[80];
	char tekst[80];
	if((pid=fork())==0)
	{
		execl("/bin/bash", "ls", "-l", sciezka, NULL);
		printf("Proces potomny ma nr, %d', gdzie %d jest identyfikatorem tego procesu", getpid(), getpid());
		_Exit(2);
	}
	else
	{
		gets(nazwa);
		fd=creat(nazwa,2);
		gets(tekst);
		for(i=65;i<=80;i++)
		{
			write(fd,tekst[i],1);
		}
		_Exit(1);
	}
}