#include<stdio.h>
#include<string.h>

int main() {
  int idade;
  double salario, altura;
  char genero;
  char nome[50] = "Fulana da Silva";
  
  idade = 20;
  salario = 5800.52568;
  altura = 1.63;
  genero = 'F';
//  strcpy(nome, "Fulana da Silva");

/*  
  printf("\n\n\nIDADE : %d\n", idade);
  printf("SALARIO : %.2lf\n", salario);
  printf("ALTURA : %.2lf\n", altura);
  printf("GENERO(M/F) : %c\n", genero);
  printf("NOME : %s\n\n\n\n\n", nome);
*/

  printf("\n\n\n\nA funcionaria %s, sexo %c, com altura de %.2lf, ganha %.2lf e tem %d anos.\n\n\n", nome, genero, altura, salario, idade);

  return 0;
}