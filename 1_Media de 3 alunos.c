#include <stdio.h>
#include <math.h>
int main()
{
    int prova1,prova2,prova3,media;

    printf("De a nota da primeira prova: ");
    scanf("%d",&prova1);

    printf("De a nota da segunda prova: ");
    scanf("%d",&prova2);

    printf("De a nota da terceira prova: ");
    scanf("%d",&prova3);

    media = (prova1 + prova2 + prova3)/3;

    printf("A media das provas eh: %d",media);

        return 0;
}
