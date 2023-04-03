#include<stdio.h>


int main(){

    int h1, h2, m1, m2, mf, hf;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    //minutos 

    if(m2==m1){
        mf=0;
    }else if(m2>m1){
        (h1==h2) ? (mf = m2-m1) : (mf = 60-(m2-m1));

    } else{
        (h1==h2) ? (mf = 60-(m1-m2)) : (mf = m1-m2);
    }

    //horas
    if(h2==h1){

        if(m2==m1){
        hf=24;
        }else if(m2>m1){
        hf=0;
        }else{hf=23;}

    }else if(h2>h1){
        hf = 24-(h1-h2);
    } else{
        hf = 24-(h2-h1);
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);

    return 0;
}