#include <stdio.h>

int main(){

int c, n;

n = 1;                 // EOF = -1
while ((c = getchar()) != EOF) { // makro getchar() pobiera wartości ze standardowego urządzenia wejścia
  printf("%3o", c); 
  if (n++ >= 10) {
    n = 1;
    printf("\n");
  }
  else {
    printf(" ");
  }
}

if (n != 1)          
  printf("\n");

return(0);
}
