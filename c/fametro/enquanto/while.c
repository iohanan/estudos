#include<stdio.h>

int main ()
{
  int x, soma;

  soma = 0;
  printf("Insira o valor desejado: ");
  scanf("%d", &x);

  while (x != 0) 
  {
    soma = soma + x;
    printf("Insira o valor desejado: ");
    scanf("%d", &x);
  }

  printf("SOMA = %d\n", soma);
  return 0;  
}

