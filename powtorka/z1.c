#include <stdio.h>
#include <unistd.h>

int main() {
int pid;
char komenda[80];

gets(komenda);

if((pid=fork())==0){
	printf("Proces potomny ma nr %d \n", pid);
	execl("/bin/bash", "bash", "-c", komenda, NULL);
} else
	printf("%d \n", getppid());
_Exit(0);
}
