/*
data: 08/05/2023;
*/
#include<stdio.h>

int main()
{
  int num, count=0;

  printf("Insira os numeros:\n");
  do
  {
    scanf("%d", &num);
    if(num>100&&num<200)
      count++;

  }while(num!=0);

  printf("Quantidade de numeros entre 100 e 200 digitados: %d\n", count);

  return 0;
}