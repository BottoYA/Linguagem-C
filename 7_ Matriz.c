#include<stdio.h>
main()

{
    int x[3][4], i, j;
    //Entrada de dados
    for (i=0; i < 3; i++)
    {
        for (j=0; j < 4; j++)
        {
            printf("Entre com dado da posicao: %d : %d \n", i, j);
            scanf("%d",&x[i][j]);
        }
    }
    //Saída de dados

    for (i=0; i < 3; i++)
    {
        for (j=0; j < 4; j++)
        {
            printf("Conteudo da posicao %d , %d \n", i, j);
            printf("%d \n", x[i][j]);
        }
    }

    return 0;
}
