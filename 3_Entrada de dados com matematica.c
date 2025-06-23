main()
{
  int a, b, c;

  printf("De um valor ");
  scanf("%d",&a);

  printf("De outro valor ");
  scanf("%d",&b);

  c = a + b;
  printf("A soma de %d e %d sera: %d ", a, b, c);

  c = a - b;
  printf("A subtracao %d e %d sera: %d ", a, b, c);

  c = a * b;
  printf("A multiplicacao de %d e %d sera: %d ", a, b, c);

  c = a / b;
  printf("A divisao de %d e %d sera: %d ", a, b, c);

  c = a % b;
  printf("O resto de %d e %d sera: %d ", a, b, c);

}
