/*
atv 1186
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x=12, i, j, k=1, div=0;    //controladores
    float m[x][x], soma=0;
    char ch;

    scanf("%c", &ch);   //S ou M

    for(i=0;i<x;i++)   //matriz
        {
            for (j = 0; j < x; j++)
            {
                scanf("%f", &m[i][j]);
            }
            
        }

   /*laço para calculo*/

    if(ch=='S'){
        for(i=1;i<x;i++)   
        {
            for (j=x-i;j<=(x-1);j++)
            {
                soma=soma+m[i][j];
            }
            
        }
        printf("%.1f\n", soma);
    }else if(ch=='M')
    {
        for(i=1;i<x;i++)   
        {
            for (j=x-i;j<=(x-1);j++)
            {
                soma=soma+m[i][j];
                div+=1;
            }
            
        }
        printf("%.1f\n", soma/div);
    }
    return 0;
}
