#include <stdio.h>

main()
{

int deskr;

if((deskr=open("probny.txt",1))==-1){
  printf("Pliku nie otwarto, kod %d\n",deskr);
  _Exit(1);
  }
else
  printf("Plik otwarto, kod %d\n", deskr);
close(deskr);
_Exit(0);
}

