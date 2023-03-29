#include<stdio.h>

int main(){

    int n; 
    double cem, cinq, vinte, dez, cinco, dois, um;


        scanf("%d", &n);

        cem = (double)n/100;
        cinq = ((cem*100)-((int)cem*100))/50;
        vinte = ((cinq*100)-((int)cinq*100))/20;
        dez = ((vinte*100)-((int)vinte*100))/10;
        cinco = ((dez*100)-((int)dez*100))/5;
        dois = ((cinco*100)-((int)cinco*100))/2;
        um = ((dois*100)-((int)dois*100));

      




    printf("%d nota(s) de R$ 100,00\n", (int)cem);
    printf("%d nota(s) de R$ 50,00\n", (int)cinq);
    printf("%d nota(s) de R$ 20,00\n", (int)vinte);
    printf("%d nota(s) de R$ 10,00\n", (int)dez);
    printf("%d nota(s) de R$ 5,00\n", (int)cinco);
    printf("%d nota(s) de R$ 2,00\n", (int)dois);
    printf("%d nota(s) de R$ 1,00\n", (int)um);

    return 0;

}

