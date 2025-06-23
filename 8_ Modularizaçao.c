#include<stdio.h>
#include<locale.h>

Linha(int x)
{
    int i;
    for (i=0; i <= x; i++)
    {
        putchar('*');
    }
        putchar('\n');
}

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    Linha(10);
    puts("Numeros entre 1 e 5");
    Linha(10);
    for (i=1;i<=5;i++)
     {
         printf("\n%d\n",i);
     }
    Linha(10);
}
