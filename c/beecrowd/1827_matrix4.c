/*
@autor: iohanan
data: 02/05/2023
atv 1827
*/
#include<stdio.h>
int main()
{
    int x;

    while(scanf("%d", &x) != EOF) {
        int i, j, k=1, l;    //controladores

        int m[x][x];    //matrix

        l=x/3;  //delimitador da matrix central 1

        for (i = 0; i < x; i++)     //preenchimento matrix
        {
            for (j = 0; j < x; j++)
            {
                if(i==j)        
                {
                    m[i][j]=2;
                }//diagonal principal 2
                else           
                {
                    m[i][j]=0;
                }//preenchimento 0    

                if(j==x-k)      
                {
                    m[i][j]=3;
                    k++;
                }//diagonal secundaria 3

                if (i>=l&&i<x-l&&j>=l&&j<x-l)   
                {
                    m[i][j]=1;

                }//matrix central 1
                if(x%2!=0)
                {     
                    m[x/2][x/2]=4;
                }//elemento central 4
            }
        }

        for (i = 0; i < x; i++)     
        {
            for (j = 0; j < x; j++)
            {
                printf("%d", m[i][j]);
            }
            printf("\n");
        }//print matrix
        printf("\n");
    }
    return 0;
}
