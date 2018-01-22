#include <stdio.h> 
#include <unistd.h>

main()
{

int pid;
char cmd[80];

gets(cmd);

if((pid=fork())==0){
  printf("proces potomny, nr %d \n",pid);
  execl("/bin/bash","bash","-c",cmd,NULL); //Nie wiadomo ile ma argumentów execl, dlatego podajemy null na końcu
  printf("\nKONIEC WYKONANIA POLECENIA\n"); //Nie wykonuje się - bo kod z powyżej zasłania kod tej printf
  }
else{
  printf("proces macierzysty, nr %d \n",pid);
  printf("proces macierzysty, druga linia\n");
}
}

