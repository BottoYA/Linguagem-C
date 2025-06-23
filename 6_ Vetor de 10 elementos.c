#include <stdio.h>
const int n = 10;
int main()
{
    float  vetor[n];
    int numero, n, posicao;
    numero = 0;

    while (posicao<=9)
    {
        printf("De um numero:\n");
        scanf("%f",&numero);

        vetor[posicao] = numero;

        posicao++;
    }

    posicao = 0;

    printf("\n Numeros escolhidos(saida):\n");

    while (posicao<=9)
    {
       printf("%.2f\n", vetor[posicao]);
       posicao++;
    }

    return 0;
}
