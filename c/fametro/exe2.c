/*
data: 08/05/2023
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
  while (1)
  {
    int a, b, media;
    printf("Insira a nota 1: ");
    scanf("%d", &a); //nota 1 e nota 2
    printf("Insira a nota 2: ");
    scanf("%d", &b); //nota 1 e nota 2

    if (b>10||b<0||a>10||a<0) //se  nota 2 for 0 imprimir "VALOR INVALIDO"
    {
      if(a>10||a<0) //se a nota 1 for inválida
        while (a>10||a<0)
        {
          printf("Valor inválido.\n");
          printf("Insira a nota 2: ");
          scanf("%d", &a); 
        }

      if(b>10||b<0) //se a nota 2 for inválida
        while (b>10||b<0)
        {
          printf("Valor inválido.\n");  
          printf("Insira a nota 2: ");
          scanf("%d", &b); //nota 1 e nota 2
        }
    }

    media=(a+b)/2;

    printf("Media do aluno: %d", media);
    break;
  }
  return 0;
}
