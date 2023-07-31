/*
data: 08/05/2023;
*/
#include<stdio.h>

int main()
{
  int num, count=0;

  printf("Insira os numeros positivos:\n");
  do
  {
    scanf("%d", &num);
    count++;
  }while(num>0);

  printf("Quantidade de numeros digitados: %d", count);

  return 0;
}
