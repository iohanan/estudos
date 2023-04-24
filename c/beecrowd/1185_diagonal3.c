/*
atv 1185
*/

#include<stdio.h>

int main()
{
    int x=4, i, j, div=0;    //controladores
    float m[x][x], soma=0;
    char ch;

    scanf("%c", &ch);   //S ou M

    for (i = 0; i < x; i++) //matriz
    {
        for (j = 0; j < x; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }

    /*laço para calculo*/
    if(ch=='S')
    {
        for (i = 0; i < (x-1); i++)
        {
                for (j = 0; j<x-(i+1);j++)
                {
                    soma=soma+m[i][j];            
                }
        }
        printf("%.1f\n", soma);
        
    } else if(ch=='M')
    {
        for (i = 0; i < (x-1); i++)
        {
                for (j = 0; j<x-(i+1);j++)
                {
                    soma=soma+m[i][j];    
                    div=div+1;        
                }
        }
        printf("%.1f\n", soma/div);        
    }

    return 0;
}
