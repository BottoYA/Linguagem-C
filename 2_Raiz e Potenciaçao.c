#include <stdio.h>
#include <math.h>

int main()

{
    double raiz, valor, numero1, numero2, potencia;

    //Calculo da raiz quadrada
    printf("Digite um valor: ");
    scanf("%lf",&valor);

    raiz = sqrt(valor);
    printf("O valor da raiz quadrada de %.2f eh %.2f", valor, raiz);

    printf("\n\n-----------------------\n");
    printf("Potenciacao\n");

    printf("Digite um numero: ");
    scanf("%lf",&numero1);

    printf("Digite outro numero: ");
    scanf("%lf",&numero2);

    potencia = pow(numero1,numero2);
    printf("A potenciacao entre %.2f e %.2f eh de %.2f ",numero1,numero2,potencia);

    //valor = pow(2,3);

    return 0;
}
