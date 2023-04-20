#include <stdio.h>

int main(){

    int d=20; //tamanho do vetor
    int i,j;
    int n[d], temp;

    //laço para leitura do vetor
    for(int i=0; i<d ; i++){
    scanf("%d", &n[i]);
    fflush(stdin);
    }

    //laço para substituir
    
        for(i=0, j=(d-1); i<(d/2) ;i++,j--){

            temp=n[i];
            n[i]=n[j];
            n[j]=temp;

        }


    //laço para imprimir
    for(i=0; i<d; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}