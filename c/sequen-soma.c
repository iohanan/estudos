#include<stdio.h>

int main(){

    int i, m=1, n=1, a, b;

        while(1){
                scanf("%d %d", &m , &n);
            if(m>0 && n>0){

                int soma=0;

                if (m>n){
                    a=m;
                    b=n;
                }else{
                    a=n;
                    b=m;
                }

                for(i=b;i<=a;i++){
                    printf("%d ", i);
                    soma = soma + i;
                }
                printf("Sum=%d\n", soma);
            } else{
                return 0;
            }
        }
}
