#include <stdio.h>
/* przyklad uzycia while */
 
int main()
{
   int liczba;
   int i = 1; 
 
   printf("Podaj liczbe: ");
   scanf("%d",&liczba);
 
   while(i <= liczba) 
   {
      printf("%d\n",i);
      i = i + 1;
   }
 
   return 0;
}