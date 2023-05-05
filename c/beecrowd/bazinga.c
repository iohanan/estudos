/*
@autor: iohanan;
data: ;
atv 1828
*/

/*
lagarto >Spock/paper
pedra   >tesoura/lagarto
papel   >pedra/Spock
Spock   >tesoura/pedra
tesoura >papel/lagarto
*/
#include<stdio.h>
#include<string.h>

int main()
{
   
    
    char str1[8],str2[8];
    fgets(str1, 8, stdin);
    fgets(str2, 8, stdin);


    if (strcmp(str1,str2)==0)
        printf("Caso #x: Bazinga!\n");
    
    if (str1==resultado)

    return 0;
}

int resultado (char str1[8])
{
 int x;
 char jogada[5][8]={"pedra","papel","tesoura","lagarto","Spock"}
 int index = 0;
// Enquanto os caracteres forem iguais, corre os vectores.
while( str1[index] == [index] )
{
    // Verifica se alguma das strings terminou.
    // Se sim, sai do loop. Caso contrario, analisa o próximo carácter.
    if( a[index] == '\0' || b[index] == '\0' )
        break;
    ++index;
}

// Se ambos terminaram, as strings contidas são iguais.
if( a[index] == '\0' && b[index] == '\0' )
    x=1;
else
    x=2;

return x;
}
