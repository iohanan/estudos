/*
atv 1187
*/
#include<stdio.h>

int main()
{
    int x=12,i,j,k=1,div=0;    //controladores
    double m[x][x], soma=0;
    char ch;

    scanf(" %c", &ch);   //S ou M

    for (i = 0; i < x; i++) //matriz
    {
        for (j = 0; j < x; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }

    if(ch=='S') //calculo S
    {
        for (i = 0; i < x; i++)
        {
            for (j = k; j < (x-k); j++)
            {
                soma=soma+m[i][j];
            }
            k++;
            
        }
        printf("%.1lf\n", soma);
    } else if(ch=='M')  //calculo M
    {
        for (i = 0; i < x; i++)
        {
            for (j = k; j < (x-k); j++)
            {
                soma=soma+m[i][j];
                div++;
            }
            k++;
        }
        printf("%.1lf\n", soma/div);        
    }
    
    return 0;
}