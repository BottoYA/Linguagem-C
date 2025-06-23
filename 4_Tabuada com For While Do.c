#include <stdio.h>
#include <math.h>
int main()

{
    int numero, tabuada;

    printf("\nDe um numero:\n");
    scanf("%d",&numero);

 printf("\n----------- Laco for ------------\n");
    for(tabuada = 1; tabuada <= 10; tabuada++)
    {
       printf("\n %d X %d = %d\n",tabuada,numero,numero*tabuada);
    }

 printf("\n----------- Laco while ------------\n");
  tabuada = 0;
    while(tabuada <= 9)
 {
     tabuada++;
       printf("\n %d X %d = %d\n", tabuada, numero, tabuada*numero);
 }

 printf("\n\n----------- Laco do while ------------\n");
  tabuada = 0;
    do
  {
    tabuada++;
      printf("\n %d X %d = %d \n", tabuada, numero, numero * tabuada);
  } while (tabuada <= 9);

    return;
}
