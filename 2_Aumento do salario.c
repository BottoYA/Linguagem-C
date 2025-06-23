#include <stdio.h>
#include <math.h>
 main()
{
    double salario,aumento,porcentagem;

    printf("De o valor do salario: ");
    scanf("%lf",&salario);

    porcentagem = 1.25;

    aumento = salario * porcentagem;

    printf("O valor do aumento sera de: %2.lf",aumento);

}
