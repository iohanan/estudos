#include<stdio.h>


int main(){

    int h1, h2, m1, m2, mf, hf;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    //horas
    hf = h2 - h1;
    mf = m2 - m1;

    if (hf < 0){
        hf = 24 - (h1-h2);
    } else if(hf == 0 && mf < 0 ){
        hf = 23;
        mf = 60 - (m1-m2);
    } 

    //minutos 

    if (mf < 0){
        mf = 60 - (m1-m2);
    } else if (m1==m2){
        mf = 0;
    } else if(m1==60 || m2==60 ){
        mf = 0;
        hf++;
    }



    if(mf == 0 && hf==0){
        hf = 24;
        mf = 0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);
    }else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);
    }

    return 0;
    
}