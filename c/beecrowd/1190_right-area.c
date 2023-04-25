/*
1190
*/
#include<stdio.h>

int main()
{
    int x=12, i, j, div=0;  //controladores
    double m[x][x], soma=0;   //matriz e operações
    char ch;    //S ou M

    scanf("%c", &ch);   //leitura char

    for (i = 0; i < x; i++) //leitura matriz
    {
        for (j = 0; j < x; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    
    for (i = 1; i < x/2; i++)  //calculo
    {
        for(j=x-1; j>x-(1+i);j--)   //primeira metade da area
        {
            soma+=m[i][j];
            div++;
        }
        if(i==(x/2)-1)  //segunda metade da area
        {
            for (i = x/2; i < x-1; i++) 
            {
                for (j = i+1; j < x; j++)
                {
                    soma+=m[i][j];
                    div++;
                }
            }
            
        }
    }

    if(ch=='S')     //print da SOMA
    {
        printf("%.1lf\n", soma);
    }else if (ch=='M')  //print da MEDIA
    {
        printf("%.1lf\n", soma/div);
    }
    

    return 0;
}
