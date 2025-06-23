#include <stdio.h>

int main()
{
    int i, numero, numero_impar, numero_par;

    for (i = 1; i <= 10; i++)
    {
        printf("De um numero\n");
        scanf("%d",&numero);

        if (numero % 2 == 0)
        {
            numero_par = numero_par + numero;
        }

        else
        {
            numero_impar = numero_impar + numero;
        }
    }

    printf("\nSoma dos numeros pares: %d\n", numero_par);
    printf("Soma dos numeros impares: %d\n", numero_impar);

    return 0;
}
