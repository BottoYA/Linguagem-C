#include <stdio.h>
const int n = 6;
int main()
{
    float vetor[n], media;
    int numero, n, posicao, soma;
    posicao = 0;
    soma = 0;

    while (posicao <= 5)
    {
       printf("De um numero:\n");
       scanf("%f",&vetor[posicao]);
       soma = vetor[posicao] + soma;
       posicao++;
    }

    media = soma/6;
    printf("\n A media aritmetica dos valores eh: %.2f",media);

    return 0;
}
