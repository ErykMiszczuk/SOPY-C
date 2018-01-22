// brak bibliotek
// #include <stdio.h>
// #include <unistd.h>

main()
// Typ zmiennej nr powinien być int a nie char
char nr;
//Brak zmiennej c, to powinna być tablica 
{ 
gets(c); 
//brakuje nawiasów w if ((nr=fork())>0)
if (nr=fork(0)>0){
	// zły wzorzec powinno być %d a nie c
   printf("potomny, %c\n", nr); 
   // brak NULL na końcu execl, brakuje -c przed samą komendą
   execl("/bin/sh","sh",c); 
else 
   printf("macierzysty\n") // brak ; 
} 