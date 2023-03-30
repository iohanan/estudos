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

    double n, cem, cinq, vinte, dez, cinco, dois;
    double cem2, cinq2, vinte2, dez2, cinco2, dois2, um2;

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


    //moedas
    um = rondo((fmod(dois, 1)*2));
    cem2 = rondo(fmod(n, 1)); 
    cinq2 = rondo((fmod(cem2, 1))/50);
    vinte2 = rondo((fmod(cinq2, 1)*50/25));
    dez2 = rondo((fmod(vinte2, 1)*25)/10);
    cinco2 = rondo((fmod(dez2, 1)*10)/5);
    um2 = rondo((fmod(cinco2, 1)*5));

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

    printf("MOEDAS:\n");
    printf("%.0f nota(s) de R$ 1.00\n", floor(cem2));  
    printf("%.0f nota(s) de R$ 0.50\n", floor(cinq2));
    printf("%.0f nota(s) de R$ 0.20\n", floor(vinte2));
    printf("%.0f nota(s) de R$ 0.10\n", floor(dez2));
    printf("%.0f nota(s) de R$ 0.05\n", floor(cinco2));
    printf("%.0f nota(s) de R$ 0.01\n", um2);


    return 0;

}

