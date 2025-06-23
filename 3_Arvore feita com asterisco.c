#include <stdio.h>
int main()
{
    int numero_ramos, arvore, asterisco;

    asterisco = 1;
    arvore = 1;

    printf("Quantos ramos tem a arvore?\n");
    scanf("%d",&numero_ramos);

    do
    {
        do
        {
            printf("*");
            asterisco++;
        } while (asterisco <= arvore);

        asterisco = 1;
        arvore++;
        printf("\n");
    } while (arvore <= numero_ramos);

    return 0;
}
