#include <stdio.h>
#include <math.h>
const int n = 6;
int main()
{
    float vetor[n];
    int numero, n, posicao, numero_impar, numero_par;
    posicao = 0;
    numero_par = 0;
    numero_impar = 0;

    while (posicao <= 5)
    {
       printf("De um numero:\n");
       scanf("%f",&vetor[posicao]);
        numero = vetor[posicao];
       if (numero % 2 == 0)
       {
            numero_par = numero_par + 1;
       }
       else
       {
            numero_impar = numero_impar + 1;
       }
       posicao++;
    }

    posicao = 0;

    printf("\nNumeros pares:\n");
    while (posicao <= 5)
    {
        numero = vetor[posicao];
        if (numero % 2 == 0)
       {
             printf("%d\n",numero);
       }
       posicao++;
    }
       printf("Quantidade de numeros pares: %d\n", numero_par);

    posicao = 0;

    printf("\nNumeros impares:\n");
    while (posicao <= 5)
    {
        numero = vetor[posicao];
        if (numero % 2 > 0)
       {
             printf("%d\n",numero);
       }
       posicao++;
    }
       printf("Quantidade de numeros impares: %d\n", numero_impar);

    return 0;
}
