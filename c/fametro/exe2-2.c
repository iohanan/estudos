/*
data: 08/05/2023
*/
#include<stdio.h>

int main()
{
    char novoC;
  do
  {
    float notaUm, notaDois, media=11;

    do    //laço de leitura da notaUm
    {
      printf("Insira a nota 1: ");
      scanf("%f", &notaUm);
      if (notaUm>10 || notaUm<0)
        printf("Valor invalido.\n");    

    } while (notaUm>10 || notaUm<0);
    
    do    //laço de leitura da notaDois
    {
      printf("Insira a nota 2: ");
      scanf("%f", &notaDois);
      if (notaUm>10 || notaUm<0)
        printf("Valor invalido.\n");
    }while (notaDois>10 || notaDois<0);

    media=(notaUm+notaDois)/2;

    printf("Media do aluno: %.1f\n", media);

    printf("\nNovo calculo (S/N): ");   //solicitar novo calculo
    getchar();
    scanf("%c", &novoC);

  } while(novoC=='S');
  
  return 0;
}
