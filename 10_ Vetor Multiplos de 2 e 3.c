#include <stdio.h>
#include <math.h>
const int n = 7;
int main()
{
    float vetor[n];
    int numero, n, posicao;
    posicao = 0;

    while (posicao <= 6)
    {
        printf("De um numero:\n");
        scanf("%f",&vetor[posicao]);
        posicao++;
    }

    posicao = 0;

    printf("\nNumeros multiplos de 2:\n");

    while (posicao <= 6)
    {
        numero = vetor[posicao];
        if (numero % 2 == 0)
        {
            printf("%d\n",numero);
        }
        posicao++;
    }

    posicao = 0;

    printf("\nNumeros multiplos de 3:\n");

    while (posicao <= 6)
    {
        numero = vetor[posicao];
        if (numero % 3 == 0)
        {
            printf("%d\n",numero);
        }
        posicao++;
    }

    posicao = 0;

    printf("\nNumeros multiplos de 2 e de 3:\n");

    while (posicao <= 6)
    {
        numero = vetor[posicao];
        if (numero % 2 == 0 && numero % 3 == 0)
        {
            printf("%d\n",numero);
        }
        posicao++;
    }

    return 0;
}
