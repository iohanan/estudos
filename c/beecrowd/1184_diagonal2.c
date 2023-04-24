/*
atv 1184
*/
/* visualização de matriz
0 1 2 3

1 2 3 1   0
4 5 6 1   1
7 8 9 1   2
1 2 3 1   3
*/
#include<stdio.h>

int main()
{
    int x=12, i, j, div=0; //controladores
    float m[x][x], soma=0, media;
    char ch;

    /*laço pra leitura S ou M*/

    scanf("%c", &ch);

    /*laço para leitura da matriz*/
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            scanf("%f", &m[i][j]);
        }
        
    }
    
    /*laço para o calculo*/
    if(ch=='S')
    {
        for(i=1;i<x;i++)
        {
            for(j=0;j<i;j++)
            {
                soma=soma+m[i][j];
            }
        }   
        printf("%.1f\n", soma);

    } else if (ch=='M')
    {
        for(i=1;i<x;i++)
        {
            for(j=0;j<i;j++)
            {
                soma=soma+m[i][j];
                div=div+1;
            }
        }
        media=soma/div;
        printf("%.1f\n", media);
    }
    return 0;
}
