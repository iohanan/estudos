/*
atv 1189
*/
#include<stdio.h>

int main()
{
    int x=12, i, j, k=0, div=0;    //controladores
    double m[x][x], soma=0;
    char ch;    //S ou M

    scanf("%c", &ch);    //leitura char

    for (i = 0; i < x; i++) //leitura matriz
    {
        for (j = 0; j < x; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    
    /*cálculo*/

    for (i = 1; i < (x/2)-1; i++)
    {
        for (j = 0; j < i; j++)
        {
            soma=soma+m[i][j];
            div+=1;
        }           
    }
    k=(x/2)-1;
    for (i = x/2; i < x-1; i++)
    {
        for (j = 0; j < k; j++)
        {
            soma=soma+m[i][j];
            div+=1;
        }    
        k--;       
    }

        if(ch=='S')
        {
            printf("%.1lf\n", soma);        
        } else if(ch=='M')
        {
            printf("%.1lf\n", soma/div);        
        }
    return 0;
}
