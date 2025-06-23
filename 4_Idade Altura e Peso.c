#include <stdio.h>

int main()
{
    int pessoa, idade, altura, altura_1, peso, quantidade, quantidade_1, quantidade_2, media_altura, porcentagem_peso;
    pessoa = 1;
    quantidade = 0;
    for(pessoa = 1; pessoa <= 5; pessoa++)
    {
        printf("De a idade da pessoa %d\n", pessoa);
        scanf("%d",&idade);

        if (idade > 50)
          {
            quantidade = quantidade + 1;
          }

        if (idade >= 10 && idade <=20)
          {
            quantidade_1 = quantidade_1 + 1;
          }

        printf("De a altura da pessoa %d\n", pessoa);
        scanf("%d",&altura);

        if (idade >= 10 && idade <= 20)
          {
            altura_1 = altura + altura_1;
          }

        printf("De o peso da pessoa %d\n", pessoa);
        scanf("%d",&peso);

        if (peso < 40)
          {
            quantidade_2 = quantidade_2 + 1;
          }
    }

    porcentagem_peso = (quantidade_2 * 100)/5;

    printf("Quantidade de pessoas com mais de 50 anos: %d\n", quantidade);
    printf("Media das alturas das pessoas com idade entre 10 e 20 anos: %d\n", altura_1/quantidade_1);
    printf("Porcentagem de pessoas com peso inferior a 40kg: %d%\n", porcentagem_peso);

    return;
}
