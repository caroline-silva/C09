#include <stdio.h>
#include <conio.h>
int carac(char c,char s[])
{
	printf("\n %c", s[0]);
     if (s[0] == '\0') {
        return 0;
     }
     if (s[0]==c) {
     	printf("=>");
        return (1+carac(c,++s));
     }
     return carac(c,++s);
}

int main(void)
{
     char s[30],c;
     int t;
     printf("Busca em string\n\n");
     printf("\nDigite a string: ");
     gets(s);
     printf("\nDigite o caractere desejado: ");
     c=getchar();
     t=carac(c,s);
     printf("\n\nEncontrei %d vezes", t);
     getch();
}
