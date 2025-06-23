#include <stdio.h>
#include <math.h>
const int n = 5;
int main()
{
    float vetor_1[n], vetor_2[n];
    int numero, n, posicao, soma_numeros;
    posicao = 0;

    while (posicao <= 4)
    {
       printf("De um numero:\n");
       scanf("%f",&vetor_1[posicao]);

       printf("De um numero:\n");
       scanf("%f",&vetor_2[posicao]);

       soma_numeros = vetor_1[posicao] + vetor_2[posicao];
       printf("A soma dos elementos da posicao %d eh: %d \n", posicao, soma_numeros);
       posicao++;
    }

    return 0;
}
