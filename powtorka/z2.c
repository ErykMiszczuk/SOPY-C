#include <stdio.h>

main(argc,argv) 
int argc; 
char *argv[ ];
{ 
int i;
for(i = argc;i>0;i--) 
     printf("%d %s\n", i, argv[i]); 
};