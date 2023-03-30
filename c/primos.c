#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    //condicao principal
    if (n == 2 || n == 3 || n == 5 || n == 7){// 2 || 3 || 5 || 7
        printf("eh primo\n");
    }
    else 
    {
        //divisores de n
        if(n%2==0){
            printf("nao e primo\n");
        }else if(n%3==0){
            printf("nao e primo\n");     
        }else if(n%5==0){
            printf("nao e primo\n");     
        }else if(n%7==0){
            printf("nao e primo\n");     
        }else {
            printf("eh primo\n");
        }
    }
    
    return 0;

}