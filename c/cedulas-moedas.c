#include<stdio.h>
#include<math.h>

/*
função para arredondar as variaveis  
a partir de 3 casas decimais 
e a contagem de cedulas ser correta
como meu calculo depende dos inteiros
variaveis com casas decimais muito grandes 
causavam erro no meu calculo
*/

double rondo(double number)
{
    return (number >= 0) ? (number + 0.001) : (number - 0.001);
}


int main(){

    //declaração de variável

    double n, cem, cinq, vinte, dez, cinco, dois, um;
    double cinq2, vinte2, dez2, cinco2, um2, moedas;

    //input
    scanf("%lf", &n);

    //notas
    /*calculo buscando retirar os inteiros para quantificar as cedulas*/
    cem = rondo(n/100); //aplicando roundo em todas os calculos se for necessario
    cinq = rondo((fmod(cem, 1)*100)/50); //aplicando fmod para retirar os inteiros e contabilizar as cedulas
    vinte = rondo((fmod(cinq, 1)*50/20));
    dez = rondo((fmod(vinte, 1)*20)/10);
    cinco = rondo((fmod(dez, 1)*10)/5);
    dois = rondo((fmod(cinco, 1)*5)/2);


    




/*  aplicando floor para retirar o 
    primeiro inteiro encontrado menor       
    do que o valor resultado da operação
*/
    //output
    printf("NOTAS:\n");
    printf("%.0f nota(s) de R$ 100,00\n", floor(cem));  
    printf("%.0f nota(s) de R$ 50,00\n", floor(cinq));
    printf("%.0f nota(s) de R$ 20,00\n", floor(vinte));
    printf("%.0f nota(s) de R$ 10,00\n", floor(dez));
    printf("%.0f nota(s) de R$ 5,00\n", floor(cinco));
    printf("%.0f nota(s) de R$ 2,00\n", floor(dois));

    //moedas
    printf("MOEDAS:\n");

    um = rondo((fmod(dois, 1)*2));
    printf("%.0f nota(s) de R$ 1,00\n", floor(um));

    moedas = rondo(fmod(n, 1));

    if ((moedas/0.5)>0){
        cinq2 = moedas/0.5;
        printf("%.0f nota(s) de R$ 0,5\n", floor(cinq2));
        
        moedas = moedas-0.5;

        if((moedas/0.25)>0){
            vinte2 = moedas/0.25;
            printf("%.0f nota(s) de R$ 0,25\n", floor(vinte2));     
            moedas = (moedas-0.25);
        }else{

        } printf("0 moedas(s) de R$ 0,25\n");

        if((moedas/0.1)>0){
            dez2 = moedas/0.1;
            printf("%.0f nota(s) de R$ 0,25\n", floor(dez2));
            
            moedas = (moedas-((floor(dez2))*0.1));

        } else{
            printf("0 nota(s) de R$ 0,25\n");

        }

        if((moedas/0.01)>0){
            um2 = moedas/0.01;
            printf("%.0f nota(s) de R$ 0,25\n", floor(um2));   
        } else{
            printf("0 nota(s) de R$ 0,25\n");   

        }


    } else{
        printf("0 moedas(s) de R$ 0,50\n");
    }

    return 0;

}

