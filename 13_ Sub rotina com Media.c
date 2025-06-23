/* Elabore uma sub-rotina que leia um número não determinado de valores positivos
e retorne a média aritmética desses valores. Terminar a entrada de dados com o valor zero */

#include <stdio.h>

float calcularMedia()
{
    float soma = 0;
    int contador = 0;

    while (1)
    {
        float numero;
        printf("Digite um numero positivo (ou 0 para adquirir a media):\n");
        scanf("%f", &numero);

        if (numero == 0)
        {
            break;
        }

        soma += numero;
        contador++;
    }
    return soma / contador;
}

int main()
{
    float media = calcularMedia();

    printf("\nA media dos numeros inseridos eh: %.2f \n", media);

    return 0;
}
