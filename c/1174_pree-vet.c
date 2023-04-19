#include<stdio.h>

int main(){

    int x=1000;
    int d[x], n, i, j=0;

    scanf("%d", &n);
    if(n>51){
        n=51;
    }else if(n<2){
        n=0;
    }

    for(i=0;i<x;i++){
        d[i]=j;

        j++;
        
        if(j==n || n==0){
            j=0;
        }
        
    }

    for(i=0;i<x;i++){
        printf("N[%d] = %d\n", i, d[i]);
    }


    return 0;
}