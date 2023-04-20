/*
atv 1182
*/

/*
0 1 2

1 2 3   0
4 5 6   1
7 8 9   2
s1=12
m1=4
*/




#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x=12;    //tamanho matriz
    int n, i, j;
    float m[x][x], soma, media;
    char cha;


    scanf("%d", &n);
    scanf(" %c", &cha);

    for(i=0;i<x;i++)
        for(j=0;j<x;j++)
        {
            scanf("%f", &m[i][j]);
        }

    if(cha=='S')
    {
        for (i = 0; i < x; i++)
        {
            soma=soma+m[i][n];

        }
            printf("%.1f\n", soma);
        
    }else if (cha=='M')
    {
        for (i = 0; i < x; i++)
        {
            soma=soma+m[i][n];
            media=soma/x;

        }
            printf("%.1f\n", media);
    }
    
    return 0;
}
