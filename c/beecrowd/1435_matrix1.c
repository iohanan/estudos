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
        int tamanhoM, linha, coluna, valorFinal, controlBorda=0, valorMatriz=0, temp;  //controladores

        scanf("%d", &tamanhoM);    //leitura do tamanho

        /*
        declaração da matriz deve ser feita 
        após definido a var tamanhoM
        */

        if (tamanhoM==0)
        break;
        
        int m[tamanhoM][tamanhoM];    //matriz

        temp=tamanhoM;     //definindo o valor final da matriz para o break; do laço de preenchimento
        if (temp%2==0)
        {
            valorFinal=temp/2;
        }else
        {
            temp+=1;
            valorFinal=temp/2;
        }



        while (1)       //laço de preenchimento das bordas até o valor central
        {   
            for (linha = controlBorda; linha < tamanhoM-controlBorda; linha++) 
            {
                for (coluna = controlBorda; coluna < tamanhoM-controlBorda; coluna++)
                {   
                    if(linha==controlBorda || linha==tamanhoM-(controlBorda+1) || coluna==controlBorda || coluna==tamanhoM-(controlBorda+1))        //condição para alternar as bordas da matriz a cada repetição
                    {   
                        m[linha][coluna]=valorMatriz+1;
                    }
                }

            }
            valorMatriz++;
            controlBorda++;
            
            if (valorMatriz>valorFinal)
                break;    
            
        }
        


        for (linha = 0; linha < tamanhoM; linha++)     //print da matriz
        {   
            for (coluna = 0; coluna < tamanhoM; coluna++)
            {
                if (coluna==0)
                {
                    printf("%3d",m[linha][coluna]);
                }else
                {
                    printf(" %3d", m[linha][coluna]);
                }
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
}

