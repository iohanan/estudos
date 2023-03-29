#include<stdio.h>

    int main(){

        int n, m, segundos, minutos, horas;

        scanf("%d", &n);

        /*calculo segundos*/
        segundos=n%60; 

        /*calculo horas*/
        m=n/60;
        horas=m/60; 
        
        /*calculo minutos*/
        minutos=m%60;

        printf("%d:%d:%d\n", horas, minutos, segundos);

        return 0;        
    }
