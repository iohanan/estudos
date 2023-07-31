/*
data: 08/05/2023
*/
#include<stdio.h>

int main()
{
  float a, b, div;

  printf("Valor 1: ");

  scanf("%f", &a); //nota 1 e nota 2

  do
  {
    printf("Valor 2: ");
    scanf("%f", &b); //nota 1 e nota 2
    if(b==0)
      printf("Valor inválido.\n");

  } while(b==0);

  div=a/b;

  printf("Divisao: %.1f", div);
  return 0;
}