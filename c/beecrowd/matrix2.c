/*
@autor: @iohanan;
@data: 27/04/2023;
atv 1478
*/
#include<stdio.h>

int main()
{
    while (1)
    {
        
        int tamanhoM, linha, coluna;    //controlodares

        scanf("%d", &tamanhoM);
        int m[tamanhoM][tamanhoM];      //matriz
        
        if(tamanhoM==0)     //fim do laço de repetição while
            break;

        for (linha = 0; linha < tamanhoM; linha++)      //laço de preenchimento da matriz
        {
            for (coluna = 0; coluna < tamanhoM; coluna++)
            {

                if(linha==coluna)
                {
                    m[linha][coluna]=1; 
                }else if(coluna>linha)
                {
                    m[linha][coluna]=(coluna-linha)+1;
                }else
                {
                    m[linha][coluna]=(linha-coluna)+1;
                }
            }
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
