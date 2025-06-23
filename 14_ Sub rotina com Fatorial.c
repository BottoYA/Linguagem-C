#include <stdio.h>

int calcularFatorial(int numero)
{
    int fatorial = 1;

    if (numero == 0 || numero == 1)
    {
        return 1;
    }

    // Calcular o fatorial
    for (int i = 2; i <= numero; i++)
    {
        fatorial *= i;
    }

    return fatorial;
}

int main()
{
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    int resultado = calcularFatorial(num);

    if (resultado != 0)
    {
        printf("O fatorial de %d eh: %d \n", num, resultado);
    }

    return 0;
}
