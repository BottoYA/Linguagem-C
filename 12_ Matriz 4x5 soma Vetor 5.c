/*Elabore um programa que preencha uma matriz 4 x 5, calcule e mostre um vetor com cinco posições,
onde cada posição contém a soma dos elementos de cada coluna da matriz*/

#include<stdio.h>
const int n = 5;
int main()
{
    int matriz[4][5],linha,coluna,vetor[n],posicao,soma;
    soma = 0;
    //Entrada de dados
    for (linha=0; linha < 4; linha++)
    {
        for (coluna=0; coluna < 5; coluna++)
        {
            printf("Entre com dado da posicao: %d : %d \n", linha, coluna);
            scanf("%d",&matriz[linha][coluna]);
        }
    }

    //soma dos elementos

    for (coluna=0; coluna<5; coluna++)
    {
        for (linha=0; linha<4; linha++)
        {
            soma = matriz[linha][coluna] + soma;

        }
    printf("\nNumero do vetor na posicao %d: %d\n",coluna,soma);  /*escrita do resultado*/
    soma = 0;
    }

    return 0;
}
