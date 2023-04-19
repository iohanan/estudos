/*
atv 1179
*/

#include<stdio.h>

int main(){

    int x=15, y=5, i=0;
    int par[y], impar[y], n, qp=0, qi=0;


    for(i=0;i<x;i++){
        scanf("%d", &n);
        if(n%2==0){ //laço para preenchimento do vetor par
            par[qp]=n;
            qp++;
            if(qp==5){
                for(qp=0;qp<y;qp++){ //laço para impressão dos 5 primeiros
                    printf("par[%d] = %d\n", qp, par[qp]);
                }
                qp=0;
            }
            
        }else{  ////laço para preenchimento do vetor impar
            impar[qi]=n;
            qi++;
            if(qi==5){
                for(qi=0;qi<y;qi++){ //laço para impressão dos 5 primeiros
                    printf("impar[%d] = %d\n", qi, impar[qi]);
                }
                qi=0;
            }
        }
    }

        for(i=0;i<qi;i++){ //impressão do resto dos impares
        printf("impar[%d] = %d\n", i, impar[i]);
        }
        
        for(i=0;i<qp;i++){ //impressão do resto dos pares
        printf("par[%d] = %d\n", i, par[i]);
        }
    return 0;
}