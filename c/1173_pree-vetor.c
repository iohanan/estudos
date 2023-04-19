#include<stdio.h>

int main(){

    int n[9], i;

    scanf("%d", &n[0]);

    for(i=0; i<10; i++){
        printf("N[%d] = %d\n", i, n[i]);

        n[i+1]= n[i]*2;
        
    }

    return 0;
}