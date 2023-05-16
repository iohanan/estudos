/*
@autor: iohanan;
data: 15/05/2023;
atv 1828
*/

#include<stdio.h>
#include<string.h>

char jogada (char string);



int main ()
{
    int comp, x, y=1;   //controladores
    char opcoes[5][8]={"pedra","papel","tesoura","lagarto","Spock"};
    char string1[8];  //sheldon
    char string2[8];    //raj
    char sheldon[8], raj[8];

    scanf("%d", &x);

    while (y<=x)
    {
        scanf(" %[^ ]s", string1);
        scanf(" %[^\n]s", string2);

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
/*
    0 - pedra   >tesoura/lagarto    0 - 2/3
    1 - papel   >pedra/Spock        1 - 0/4
    2 - tesoura >papel/lagarto      2 - 1/3
    3 - lagarto >Spock/paper        3 - 4/1
    4 - Spock   >tesoura/pedra      4 - 2/0
*/
        if(strcmp(string1,string2)==0)  //empate
        {
            printf("Caso #%d: De novo!\n",y);
            y++;
            continue;
        }
        if (strcmp(sheldon,opcoes[0])==0)
            (strcmp(sheldon,opcoes[0])==0&&strcmp(raj,opcoes[2])==0||strcmp(raj,opcoes[3])==0) ?  printf("Caso #%d: Bazinga!\n",y) : printf("Caso #%d: Raj trapaceou!\n",y);
        if(strcmp(sheldon,opcoes[1])==0)
            (strcmp(sheldon,opcoes[1])==0&&strcmp(raj,opcoes[0])==0||strcmp(raj,opcoes[4])==0) ?  printf("Caso #%d: Bazinga!\n",y) : printf("Caso #%d: Raj trapaceou!\n",y);
        if(strcmp(sheldon,opcoes[2])==0)
            (strcmp(sheldon,opcoes[2])==0&&strcmp(raj,opcoes[1])==0||strcmp(raj,opcoes[3])==0) ?  printf("Caso #%d: Bazinga!\n",y) : printf("Caso #%d: Raj trapaceou!\n",y);
        if(strcmp(sheldon,opcoes[3])==0)
            (strcmp(sheldon,opcoes[3])==0&&strcmp(raj,opcoes[4])==0||strcmp(raj,opcoes[1])==0) ?  printf("Caso #%d: Bazinga!\n",y) : printf("Caso #%d: Raj trapaceou!\n",y);
        if(strcmp(sheldon,opcoes[4])==0)
            (strcmp(sheldon,opcoes[4])==0&&strcmp(raj,opcoes[2])==0||strcmp(raj,opcoes[0])==0) ?  printf("Caso #%d: Bazinga!\n",y) : printf("Caso #%d: Raj trapaceou!\n",y);

        y++;
    }
    return 0;
}

