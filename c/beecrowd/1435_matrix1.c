/*
@autor: iohanan;
@data:26/04/2023;
@nome: Iohanan Monteiro;
atv 1435
*/
#include<stdio.h>

int main()
{
    while(1){
        int x, i, j, k, a=0, b=0, c=0, temp;  //controladores

        scanf("%d", &x);    //leitura do tamanho

        /*
        DECLARAÇÃO DA MATRIZ TEM QUE SER FEITA 
        DEPOIS DE DEFINIDO O VALOR DA VAR X
        */

        if (x==0)
        break;
        
        int m[x][x];    //matriz

        temp=x;     //definindo o valor central da matriz para o break; do laço de preenchimento
        if (temp%2==0)
        {
            k=temp/2;
        }else
        {
            temp+=1;
            k=temp/2;
        }



        while (1)       //laço de preenchimento das bordas até o valor central
        {   
            for (i = c; i < x-c; i++) 
            {
                for (j = c; j < x-c; j++)
                {   
                    if(i==a || j==x-(c+1) || j==a || i==x-(c+1))        //condição para alternar as bordas da matriz a cada repetição
                    {   
                        m[i][j]=b+1;
                    }
                }

            }
            a++;
            b++;
            c++;
            
            if (b>k)
                break;    
            
        }
        


        for (i = 0; i < x; i++)     //print do vetor
        {   
            for (j = 0; j < x; j++)
            {
                if (j==0)
                {
                    printf("%3d",m[i][j]);
                }else
                {
                    printf(" %3d", m[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
}

