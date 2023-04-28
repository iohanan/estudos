/*
autor: @iohanan;
data: /04/2023
atv 1557
*/
#include<stdio.h>
#include<math.h>

int main()
{   
        int x, i=0 , j=0, k=0, nDig=0;       //controladores
    while (1)
    {

        i=0;
        j=0;
        k=0;
        nDig=0;
        x=0;

        scanf("%d", &x);        //tamanho da matrix

        if (x==0)       //condição pra encerrar o laço 
            return 0;

        int m[x][x];        //matriz


        for (i = 0; i < x; i++)     //preenchimento da matriz
        {   
            for (j = 0; j < x; j++)
            {   
                if(i==j){
                    m[i][j]=pow(4,j);
                }else
                {
                    m[i][j]=pow(2,j+i);
                }
            }        
        }//

        k=m[x-1][x-1];      //definindo o maior elemento

        if (k < 10)
        {
            nDig = 1;
        }
        else{

            while (k != 0)
            {
                nDig = nDig + 1;
                k = k / 10;
            }
        }//nDig            

        for (i = 0; i < x; i++)     //print da matriz
        {
            for (j = 0; j < x; j++)
            {   
                if (j==0)
                {
                    printf("%*d",nDig, m[i][j]);
                }else
                {
                    printf(" %*d",nDig, m[i][j]);

                }
                
            }
            printf("\n");
     
        }//print 
        printf("\n");
    }
    return 0;
}//main