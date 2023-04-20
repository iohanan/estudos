/*
atv 1183
*/


/*
0 1 2 3

1 2 3 1   0
4 5 6 1   1
7 8 9 1   2
1 2 3 1   3

s1=2+3+1+6+1+1= 14
m1=14/6=    2,3
*/



#include<stdio.h>

int main()
{
    /*controle de variavel*/

    int x=12;    //tamanho da matriz
    int i, j, k, div=0;
    float m[x][x], soma=0, media;
    char cha;

    scanf(" %c", &cha);

    //laço para leitura da matriz
    for(i=0;i<x;i++)
        for (j = 0; j < x; j++)
        {
            scanf("%f", &m[i][j]);
        }

        if(cha=='S')                                             
        {
            for(i=0, j=0;i<(x-1);i++, j++)
            {
                for (k=j+1; k < x; k++)
                    {   
                        soma=soma+m[i][k];
                    }
            }
            printf("%.1f\n", soma);
        } else if(cha=='M')
        {
            for(i=0, j=0;i<(x-1);i++, j++)
            {
                for (k=j+1; k < x; k++)
                    {   
                        soma=soma+m[i][k];
                        div=div+1;
                    }
            }
            media=soma/div;
            printf("%.1f\n", media);
        }
    return 0;
}
