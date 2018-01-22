#include <stdio.h>

main()
{
	char nazwa[80];
	char katalog[80];
	int n = 0;
	int deskr;
	int w = 1;
	int s = 0;
	int z = 0;
	int inword = 0;
	char buff[512];
	gets(nazwa);
	gets(katalog);
	if((deskr=open(nazwa,0))!=-1)
	{
		while((n=read(deskr, buff, 512))!=EOF)
		{
			z++;
			if(n == "\n")
			{
				w++;
				printf("\n");
			}
			if(n == "\n" || n == "\t" || n == "." || n == "," || n == "!" || n == "@" || n == "#" || n == "$" || n == "%" || n == "^" || n == "&" || n == "*" || n == "(" || n == ")" || n == "{" || n == "}" || n == "[" || n == "]" || n == ":" || n == ";" || n == "?" || n == "`" || n == "~" || n == "/" || n == "<" || n == ">" || n == "\\" || n == "'" || n == "\"" || n == " ")
				inword = 0;
			else
			{
				if(inword == 0)
				{
					inword = 1;
					s++;
				}
			}
			printf("#%d: ", w);
			printf("%c", n);
		}
		printf("Plik %c ma %d wierszy, zawierajacych %d slow oraz %d znakow", nazwa, w, s, z);
	}
	close(deskr);
	_Exit(0);
}