#include<stdio.h>
 
 int main(){

    double a, b, c, A, B , C, temp;

    scanf("%lf %lf %lf", &a, &b, &c);

/*DEFININDO ORDEM DECRESCENTE*/

    if(a>b && a>c){
        if(b>c){        //a, b,c 
//nada altera
        }else{          //a, c, b
            temp=b;
            b=c;
            c=temp;
        }
    }else if(b>a && b>c){
        if(a>c){        //b,a,c
            temp=a;
            a=b;
            b=temp;
        } else{         //b,c,a
            temp=a;
            a=b;
            b=c;
            c=temp;
        }
    } else if(c>a && c>b){
        if(a>b){        //c, a, b
            temp=a;
            a=c;
            c=b;
            b=temp;
        }else{          //c, b, a
            temp=a;
            a=c;
            c=temp;
        }

    }

    A = a*a;
    B = b*b;
    C = c*c;

    if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
    } else if(A==B+C){
        printf("TRIANGULO RETANGULO\n");
    }else if(A>(B+C)){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if(A<(B+C)){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    } else if(a==b || b==c || a==c){
        printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
 }