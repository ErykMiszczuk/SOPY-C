#SOPY Podsumowanie

## Powershell
Get-ChildItem - (alternatywnie dir lub ls) wylistowuje wszystkie elementy w katalogu bieżącym
Get-Command - Wylistowuje dostępne polecenia w bieżącej instalacji systemu operacyjnego
Where-Object - Ogranicza zwracane obiekty do takich o podanych wartościach atrybutów
Select-Object - Ogranicza wyświetlanie atrybutów zwracanych przez wcześniejsze polecenie do tych podanych przez użytkownika
Get-Service - Listuje wszystkie usługi zainstalowane w systemie operacyjnym, również zatrzymane i uruchomione
Get-Item - Dostarcza informacje o obiektach znajdujących się pod podanymi ścieżkami
Get-Help - wyświetla podręcznik systemowy na temat polecenia podanego jako argument
Get-ExecutionPolicy - wyświetla informację o używanej w systemie polityce wykonywania skryptów PowerShell
Get-Alias - Wyświetla alternatywne nazwy wszystkich poleceń, lub jednego konkretnego gdy podamy je jako argument tego cmdleta

## C

```c
#include <stdio.h>
#include <unistd.h>

main(int argc, char *argv[])
{
    if(!fork())
    {
        sleep(1);
		printf("PID procesu macierzystego %d\n",getpid());
        printf("PID rodzica procesu macierzystego %d\n",getppid()); 
    }
    else
    {
        printf("PID procesu potomnego %d\n",getpid());
        printf("PID rodzica procesu potomnego %d\n",getppid());      
    }
	return 0;
}
```
```
PID procesu macierzystego - 3429 - identyfikator procesu macierzystego
PID rodzica procesu macierzystego - 2467 - identyfikator procesu wywołującego nasz program (prawdopodbnie powłoka systemowa w linuxie, czyli bash)
PID procesu potomnego - 3430 - identyfikator procesu potomnego
PID rodzica procesu potomnego - 1 - identyfikator rodzica procesu potomnego, w tym momencie proces rodzic się zakończył, czyli proces potomny staje się dzieckiem pierwszego procesu
```

fork() - no args, tworzy process potomny
execl() - przyjmuje argumenty tak długo jak nie pojawi sie NULL (ważna wielkość liter)
open("path":string, fileopenmethod:integer) - funkcja otwierająca plik i w zależności od drugiego argumentu jest to plik do odczytu (0), do zapisu (1), odczytu/zapisu (2). Zwraca numer deskryptora, czyli numer po ktorym można się odwołać do pliku
close(deskryptor:integer) - zamyka plik
write(deskryptor:integer, tekst:string, ilosc_znakow:int) - zapisuje do pliku o podanym deskryptorze dane tekstowe z tablicy znaków, gdzie ich ilość nie może przekroczyć 12
scanf(typ_danych:string, nazwa_zmiennej) - zapisuje do zmiennej o podanej nazwie dane podane na standardowym wejściu
read(deskryptor:integer, bufor:Array<char>, liczba_znakow:integer) - odczytuje z pliku dane w porcjach po bajcie, przenosi je do bufora, robi to w zależności od ostatnije liczby 
getchar() - pobiera sekwencyjnie znaki ze standardowego wejścia
argc:integer - ilość argumentów podanych przy wywołaniu programu
*argv[]:Array<char> - ciągi znaków podane jako argumenty funkcji
getpid() - zwraca pid obecnego procesu
getppid() - zwraca pid procesu rodzica
creat(nazwa:string, fileopenmethod:integer) - utworzenie pliku o nazwie nazwa i w trybie podanym jako drugi argument
_Exit(numer:integer) - zwraca kod wyjścia z programu
