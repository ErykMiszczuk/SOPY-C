#include<stdio.h>
/* przyklad uzycia printf */
 
int main()
{
   char znak='J';
   printf("znak = %c\nznak (dziesietnie) = %d\nznak (szestnastkowo) = %x\nznak (osemkowo) = %o\n",znak,znak,znak,znak);  // wzorcem dla printf jest wszystko co znajduje sie po znaku procent 
 
   float liczba = 1/3.0f;
   printf("liczba = %f\n",liczba);
   printf("liczba = %.1f\n",liczba);
   printf("liczba = %10.2f\n",liczba);
   printf("liczba = %e\n",liczba);  // wzorzec e - extended
   printf("liczba = %d\n",liczba);
 
   return 0;
}