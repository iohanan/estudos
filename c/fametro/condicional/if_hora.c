#include<stdio.h>

int main () 
{
  int hora;
    printf("Digite uma hora do dia: ");
    scanf("%d", &hora);

    if (hora < 12) {
      printf("Bom dia! \n");
    }

    else if (hora >=12 && hora <= 24 ) {
      printf("Boa tarde!\n");
    }

    else {
      printf("DATA ERRADA.\n");
    }

  return 0;
}