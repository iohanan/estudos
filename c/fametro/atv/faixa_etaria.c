#include<stdio.h>

int main (){
  int idade;


  printf("Insira a idade desse maluco: ");
  scanf("%d", &idade);

  if (idade <=2)
  {
    printf("Esse maluco é um bb\n");
  }
  else if(idade<=12)
  {
      printf("O maluco é uma criança\n");
  }
  else if(idade<=17)
  {
    printf("O maluco é um adolescente\n");
  }
  else if(idade<=25)
  {
    printf("O maluco é jovem\n");
  }
  else if(idade60)
  {
    printf("O maluco é adulto\n");
  }
  else 
  {
    printf("O maluco é velho\n");
  }
  return 0;
}