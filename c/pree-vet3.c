#include<stdio.h>

int main(){

    int x=100;
    double d[x], n, j;

    scanf("%lf", &n);

    d[0]=n;
    for(int i=1;i<x;i++){
        d[i]=n/2;
        n=n/2;
    }

    for(int i=0;i<x;i++){
        printf("N[%d] = %.4lf\n", i, d[i]);
    }

    return 0;
}