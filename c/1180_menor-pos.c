/*
atv 1180
*/

#include<stdio.h>

int main()
{
    
    int n;  //tamanho do vetor
    scanf("%d", &n);
    

    int d[n], menor, posi, i; //vetor

    for(i=0;i<n;i++){
        scanf("%d", &d[i]);
        fflush(stdin);
    }

    menor=d[0];

    for(i=0;i<n;i++){
        if(d[i]<=menor){
            menor=d[i];
            posi=i;
        }
    }


    printf("Menor valor: %d\nPosicao: %d\n", menor, posi);

    return 0;
}


