#include <stdio.h>
#include <unistd.h>

main()
{ 
int nr;
char c[80]; 
gets(c); 
if ((nr=fork())>0){
   printf("potomny, %d\n", nr); 
   execl("/bin/sh","sh", "-c", c, NULL);
}   
else 
   printf("macierzysty\n"); 
} 