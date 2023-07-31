/*
data: 08/05/2023
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
  while (1)
  {
    float a, b, div;
    printf("Valor 1: ");
    scanf("%f", &a); //nota 1 e nota 2
    printf("Valor 2: ");
    scanf("%f", &b); //nota 1 e nota 2

    if (b==0) //se  nota 2 for 0 imprimir "VALOR INVALIDO"
      while (b==0)  //solicitar novo input
      {
        printf("Valor inválido.\n");
        printf("Valor 2: ");
        scanf("%f", &b);
      }

    div=a/b;

    printf("div: %.1f", div);
    break;
  }
  return 0;
}