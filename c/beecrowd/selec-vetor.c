#include<stdio.h>

int main(){

    int dm=100;
    double n[dm];

    //laço para adicionar cada posição no vetor

    for(int i=0; i<dm; i++){
    scanf("%lf", &n[i]);
    }

    //laço para printar na tela

    for(int i=0; i<dm; i++){
        if(n[i]<=10){
            printf("A[%d] = %.1lf\n", i, n[i]);
        }
    }

    return 0;
}