#include<stdio.h>
#include<string.h>

char jogada (char string);



int main ()
{
    int comp;

        /*
    0 - pedra
    1 - papel
    2 - tesoura
    3 - lagarto
    4 - Spock
    */
    char opcoes[5][8]={"pedra","papel","tesoura","lagarto","Spock"};
    char string1[]= "tesoura";  //sheldon
    char string2[]= "papel";
    char sheldon[8], raj[8];
    //char sheldon[8]=jogada(string1), raj[8]=jogada(string2);


    for (int i = 0; i < 6; i++)     //jogada do sheldon
    {
        if (strcmp(string1, opcoes[i])==0)
        {
            strcpy(sheldon, string1);
            break;
        }
    }
    
    for (int i = 0; i < 6; i++)     //jogada do raj
    {
        comp=strcmp(string2, opcoes[i]);

        if (comp==0)
        {
            strcpy(raj, string2);
            break;
        }
    }

    printf("\n\n%s\n",sheldon);
    printf("%s\n",raj);
    if (strcmp(sheldon,opcoes[0])==0)
        (strcmp(sheldon,opcoes[0])==0&&strcmp(raj,opcoes[2])==0||strcmp(raj,opcoes[3])==0) ?  printf("SHELDON GANHA\n") : printf("SHELDON PERDEU\n");
    if(strcmp(sheldon,opcoes[1])==0)
        (strcmp(sheldon,opcoes[1])==0&&strcmp(raj,opcoes[0])==0||strcmp(raj,opcoes[4])==0) ?  printf("SHELDON GANHA\n") : printf("SHELDON PERDEU\n");
    if(strcmp(sheldon,opcoes[2])==0)
        (strcmp(sheldon,opcoes[2])==0&&strcmp(raj,opcoes[1])==0||strcmp(raj,opcoes[3])==0) ?  printf("SHELDON GANHA\n") : printf("SHELDON PERDEU\n");
    if(strcmp(sheldon,opcoes[3])==0)
        (strcmp(sheldon,opcoes[3])==0&&strcmp(raj,opcoes[4])==0||strcmp(raj,opcoes[1])==0) ?  printf("SHELDON GANHA\n") : printf("SHELDON PERDEU\n");
    if(strcmp(sheldon,opcoes[4])==0)
        (strcmp(sheldon,opcoes[4])==0&&strcmp(raj,opcoes[2])==0||strcmp(raj,opcoes[0])==0) ?  printf("SHELDON GANHA\n") : printf("SHELDON PERDEU\n");
}

/*
    pedra   >tesoura/lagarto
    papel   >pedra/Spock
    tesoura >papel/lagarto
    lagarto >Spock/paper
    Spock   >tesoura/pedra


    0 - 2/3
    1 - 0/4
    2 - 1/3
    3 - 4/1
    4 - 2/0

    0 - pedra
    1 - papel
    2 - tesoura
    3 - lagarto
    4 - Spock
    */

   
   /*
    char jogada (char string1[8], char sheldon[8])
    {

        for (int i = 0; i < 6; i++)     //jogada do sheldon
        {
            if (strcmp(string1, opcoes[i])==0)
            {
                strcpy(sheldon, string1);
                break;
            }
        }
        return  sheldon;
    }
    */