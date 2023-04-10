#include<stdio.h>

double rondo(double number)
{
    return (number >= 0) ? (number + 0.001) : (number - 0.001);
}


int main(){

    int h1, h2, m1, m2, mf, hf;
    int tempM, tempH;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

<<<<<<< HEAD

    //convertendo minutos acima de 60 em horas
    if(m2>=60){
        tempH = rondo(m2/60);
        h2 = h2+tempH;
        m2 = m2-(tempH*60);
    }  
    if(m1>=60){
        tempH = rondo(m1/60);
        h1 = h1+tempH;
        m1 = m1-(tempH*60);
    } 

    //minutos 
    if(m2==m1){
        mf=0;
    }else if(m2>m1){
        (h1==h2||h1!=h2) ?  (mf=m2-m1) : (mf = m2-m1);

    } else if(m1>m2){
        (h1==h2||h1!=h2) ? (mf = 60-(m1-m2)) : (mf = (m1-m2));
    }



    //horas
    if(h2==h1){

        if(m2==m1){
        hf=24;
        }else if(m2>m1){
        hf=0;
        }else{hf=23-hf;}
    }else if(h2<h1){
        if(m1>m2){
        hf = 24-(h1-h2);
        hf--;
        } else{
            hf = h1-h2;
        }
    }else if(h2>h1){
        if(m1>m2){
        hf = h2-h1;
        hf--;
        } else{
            hf = h2-h1;
        }
    }




    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);


    return 0;
    
}