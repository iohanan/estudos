/*
@autor: @iohanan;
data: 27/04/2023
atv 1534
*/

#include<stdio.h>   

int main()
{
    int x;

    while(scanf("%d", &x) != EOF) {     //leitura do tamanho
    int i=0, j=0, a=0;        //controladores 

        int m[x][x];    //matriz

        for (i = 0; i < x; i++)     //laço de preenchimento do valor
        {
            for (j = 0; j < x; j++)
            {
                if(j==x-(a+1) && i==a)        //digonal principal 1
                {       
                m[i][j]=2;
                }else if(i==j)      //diagonal secundaria 2
                {
                    m[i][j]=1;
                }else               //restante da matriz 3
                {
                    m[i][j]=3;      
                }
            }
                a++;
        }

        for (i = 0; i < x; i++)     //print da matriz
        {
            for (j = 0; j < x; j++)
            {
                printf("%d", m[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
