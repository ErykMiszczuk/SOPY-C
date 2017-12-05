#include <stdio.h>

#define ROZMIAR 512

main() { 	/* funkcja READ*/

int fd, i, liczba, n;
char nazwa[14], bufor[ROZMIAR];

printf("Podaj nazwe pliku do odczytu: "); scanf("%s",nazwa);
if ((fd=open(nazwa,0))==-1)
   printf("Otwarcie pliku %s nie jest mozliwe\n",nazwa);
else
   printf("Plik %s otworzono poprawnie, deskryptor %d\n",nazwa,fd);
printf("Podaj liczbe bajtow do odczytu: "); scanf("%d",&liczba);

if ((n=read(fd,bufor,liczba))==-1)
   printf("Odczytu z pliku %s nie dokonano\n",nazwa);
else{
   printf("Z pliku %s odczytano %d znakow\n",nazwa,n);
   for (i=0;i<=n;i++)
       printf("%c",bufor[i]);
   printf("\n");
   }
close(fd);
}

