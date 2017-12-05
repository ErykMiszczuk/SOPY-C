#include <stdio.h> // user/lib/include
#include <sys/fcntl.h> // user/lib/include/sys

main()
{

int deskr, wynik;
			// Mnemonik = 2
deskr=open("probny.txt",O_RDWR); /* otwarcie pliku do odczytu/zapisu */
if ((wynik=write(deskr,"Ala ma kota\n",12)) < 0) // trzeci argument ile jednostek chcemy zapisać (12 bajtów)
  printf("Do pliku o deskryptorze %2d nie zapisano danych, kod %2d\n",deskr,wynik);
else
  printf("Do pliku o deskryptorze %2d zapisano 12 bajtow danych, kod %2d\n",deskr, wynik);
close(deskr);
}

