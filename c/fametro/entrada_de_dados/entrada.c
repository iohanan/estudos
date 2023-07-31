#include <stdio.h>
#include <string.h>

void limpar_entrada() {     // Comando para limpeza de buffer de entrada
  char c;
  while ((c = getchar()) != '\n' && c != EOF) {}
} 

void ler_texto(char *buffer, int length) {      // Para ler um texto de tamanho N até a quebra de linha 
  fgets(buffer, length, stdin);
  strtok(buffer, "\n");
} 

int main()
{
  int idade1, idade2;
  char nome1[50], nome2[50];
  
  printf("\n\n\nDigite o valor da idade: ");
  scanf("%d", &idade1);
  
  printf("Digite o nome: ");
  limpar_entrada();
  ler_texto(nome1, 50);

  printf("\n\n\nDigite o valor da idade: ");
  scanf("%d", &idade2);
  
  printf("Digite o nome: ");
  limpar_entrada();
  ler_texto(nome2, 50);


  printf("\n\nIDADE : %d\n", idade1);
  printf("NOME : %s\n", nome1);

  printf("IDADE : %d\n", idade2);
  printf("NOME : %s\n", nome2);

  return 0;
}