/*
atv 1188
*/
#include<stdio.h>

int main()
{
    int x=12, i, j, k=1, div=0;    //controladores
    double m[x][x], soma=0;
    char ch;

    scanf("%c", &ch);    //S ou M

    for (i = 0; i < x; i++) //matriz
    {
        for (j = 0; j < x; j++)
        {
            scanf("%lf", &m[i][j]);
        }
        
    }

    if(ch=='S')
    {
        for (i = x-k; i > (x/2); i--)
        {
            for (j = k; j < x-k; j++)
            {
                soma=soma+m[i][j];
            }
            k++;
            
        }
        printf("%.1lf\n", soma);        
    } else if(ch=='M')
    {
        for (i = x-k; i > (x/2); i--)
        {
            for (j = k; j < x-k; j++)
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
