#include<stdio.h>

int main()
{
  int n, soma, i, x;

  printf("Quantos numeros serao somados? ");
  scanf("%d", &n);

  soma = 0;
  for (i = 1; i <= n; i++)
  {
    printf("Insira o numero %d: ", i);
    scanf("%d", &x);
    soma = soma + x;
  }

  printf("Soma : %d", soma);
  
  return 0;
}