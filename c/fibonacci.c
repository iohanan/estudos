#include<stdio.h>
#include<math.h>


int main(){

    long double F;
    int  n, x;

    scanf("%d", &x);

    for(int i=0;i<x;i++){

        scanf("%d", &n);

        if(n==0){
            printf("Fib(%d) = 0\n", n);
        }else{
            
            F= (pow((1 + sqrt(5))/2, n) -  pow((1 - sqrt(5))/2, n))/sqrt(5);


            printf("Fib(%d) = %.0Lf\n", n, F);
        }
    }
    return 0;
}