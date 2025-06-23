#include <stdio.h>
#include <math.h>
int main()
{
    int numero, quadrado, cubo, raiz;

    printf("De um numero: ");
    scanf("%d",&numero);

    quadrado = numero * numero;
    cubo = pow(numero,3);
    raiz = sqrt(numero);

    printf("O numero digitado ao quadrado sera %d \nO numero ao cubo sera %d \nA raiz do numero sera %d",quadrado,cubo,raiz);
}
