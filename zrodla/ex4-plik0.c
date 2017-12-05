#include <stdio.h>

main()
{

int deskr;
	// 0 - tryb odczytu, 1 - zapis, 2 - odczyt/zapis
if((deskr=open("probny.txt",1))==-1) //otwiera plik, tylko jeśli istnieje, zwraca numer logiczny pliku
  printf("Pliku nie otwarto, kod %d\n",deskr);
else
  printf("Plik otwarto, kod %d\n", deskr);
close(deskr); //zamyka plik, o numerze równym wartości deskr
}

