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
    char jogada[5][8]={"pedra","papel","tesoura","lagarto","Spock"}
    char str1[8],str2[8];
    fgets(str1, 8, stdin);
    fgets(str2, 8, stdin);
   


    if (strcmp(str1,str2)==0)
        printf("Caso #x: Bazinga!\n");
    
    if (str1==resultado)

    return 0;
}

int resultado (char string[8])
{
    char jogada[5][8]={"pedra","papel","tesoura","lagarto","Spock"}


    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
        strcmp(string, jogada[i][j])
        if (strcmp==0)
            break;
        
        }
        
    }
    

return x;
}
