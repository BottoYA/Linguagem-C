#include<stdio.h>
#include<math.h>

int main()

{
    int matriz_M[2][2], matriz_R[2][2], linha, coluna, maior_numero;

    //Entrada de dados

    for (linha=0; linha < 2; linha++)
    {
        for (coluna=0; coluna < 2; coluna++)
        {
            printf("Entre com dado da posicao: %d : %d \n", linha, coluna);
            scanf("%d",&matriz_M[linha][coluna]);
        }
    }

    //Achar o maior numero da matriz M

    maior_numero = 0;

    for (linha=0; linha < 2; linha++)
    {
        for (coluna=0; coluna < 2; coluna++)
        {
            if (matriz_M[linha][coluna] > maior_numero)
            {
                maior_numero = matriz_M[linha][coluna];
            }
        }
    }
    printf("Maior numero da matriz M sera: %d \n", maior_numero);

    //Multiplicacao para achar a matriz R

    for (linha=0; linha < 2; linha++)
    {
        for (coluna=0; coluna < 2; coluna++)
        {
            matriz_R[linha][coluna] = maior_numero * matriz_M[linha][coluna];
            printf("Numero da posicao %d : %d da matriz R sera: %d \n", linha, coluna, matriz_R[linha][coluna]);
        }
    }

    return 0;
}
