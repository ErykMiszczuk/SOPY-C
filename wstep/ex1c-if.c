#include <stdio.h>
/* przyklad uzycia if */
 
int main()
{
   int liczba;
 
   printf("Podaj liczbe: ");
   scanf("%d",&liczba); // Najwyraźniej funkcja scanf potrzebuje jako drugiego argumentu aderu do zmiennej gdzie chcemy ją umieścić i dlatego przed nawą występuje '&'.
 
   if( liczba > 0 )
      printf("Liczba %d jest dodatnia\n",liczba);
   else
      printf("Liczba %d jest ujemna\n",liczba);
 
   return 0;
}