#include <stdio.h>
int main()

{
    int a, cont;
    cont = 0;

 printf("----------- Laco para/for ------------\n");

    for(a = 1; a <=20; a++) //a++ = a + 1
    {
       if (a >= 10)
        continue;
       printf("\n O valor de a eh: %d",a);
    }
//---------------------------------------------------------------------------------------

 printf("\n\n----------- Laco enquanto/while ------------\n");

    while(cont <= 10)
 {
       printf("\n O valor de cont eh: %d",cont);
       cont++;
 }
    printf("\n\n O valor de cont depois do laco:");
    printf("\n O valor de cont = %d", cont);

//---------------------------------------------------------------------------------------

 printf("\n\n----------- Laco repita ate/do while ------------\n");

    do
  {
      printf("\n Valor de cont dentro do laco do: %d \n",cont);
      cont++;
  } while (cont <= 10);

    return;
}
