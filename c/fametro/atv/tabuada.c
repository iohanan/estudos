#include<stdio.h>

int main()
{
  int n, pdt;


  printf("Insira o número da tabuada: ");
  scanf("%d", &n);


  for(int i=1; i<=n ; i++)
  {
    pdt = i*n;
    printf("%d x %d = %d", i, n, pdt);
  }

  return 0;
}
