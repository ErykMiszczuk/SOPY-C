#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

main() { 	

int ile,fd;
char nazwa[14];

printf("Podaj nazwe pliku do utworzenia: "); scanf("%s",nazwa);
if ((fd=creat(nazwa,S_IRWXU))==-1)
   printf("Utworzenie pliku %s nie powiodlo sie\n",nazwa);
else
   printf("Plik %s utworzono poprawnie, deskryptor %d\n",nazwa,fd);

if ((ile=write(fd,"Ala ma kota\n",12))==-1)
   printf("Zapisu do pliku %s nie dokonano\n",nazwa);
else{
   printf("Do pliku %s zapisano %d znakow\n",nazwa,ile);
   }
close(fd);
}

