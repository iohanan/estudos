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
/*
calculo buscando retirar os inteiros para quantificar as cedulas
*/
    cem = rondo(floor(n)/100); //aplicando roundo em todas os calculos se for necessario
    cinq = rondo(fmod(cem, 1)*100)/50; //aplicando fmod para retirar os inteiros e contabilizar as cedulas
    vinte = rondo(fmod(cinq, 1)*50)/20;
    dez = rondo(fmod(vinte, 1)*20)/10;
    cinco = rondo(fmod(dez, 1)*10)/5;
    dois = rondo(fmod(cinco, 1)*5)/2;


    //moedas

    um = rondo((fmod(dois, 1)*2));
/*
multipliquei por 100 para aplicar a mesma formula
das notas 
*/
    moedas = rondo(fmod(n, 1))*100; 
    cinq2 = rondo(moedas/50); 
    vinte2 = rondo(fmod(cinq2, 1)*50)/25; 
    dez2 = rondo(fmod(vinte2, 1)*25)/10;
    cinco2 = rondo(fmod(dez2, 1)*10)/5;
    um2 = rondo(fmod(cinco2, 1))*5;




/*  aplicando floor para retirar o 
    primeiro inteiro encontrado menor       
    do que o valor resultado da operação
*/
    //output notas
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", (int)floor(cem));  
    printf("%d nota(s) de R$ 50.00\n", (int)floor(cinq));
    printf("%d nota(s) de R$ 20.00\n", (int)floor(vinte));
    printf("%d nota(s) de R$ 10.00\n", (int)floor(dez));
    printf("%d nota(s) de R$ 5.00\n", (int)floor(cinco));
    printf("%d nota(s) de R$ 2.00\n", (int)floor(dois));

    //output moedas
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", (int)floor(um));
    printf("%d moeda(s) de R$ 0.50\n", (int)floor(cinq2));  
    printf("%d moeda(s) de R$ 0.25\n", (int)floor(vinte2));
    printf("%d moeda(s) de R$ 0.10\n", (int)floor(dez2));
    printf("%d moeda(s) de R$ 0.05\n", (int)floor(cinco2));
    printf("%d moeda(s) de R$ 0.01\n\n", (int)floor(um2));

/* solução lógica para as moedas

    printf("MOEDAS:\n");

    um = rondo((fmod(dois, 1)*2));
    printf("%.0f moedas(s) de R$ 1.00\n", floor(um));

    moedas = rondo(fmod(n, 1));

    if ((moedas/0.5)>=1){
        cinq2 = moedas/0.5;
        printf("%.0f moedas(s) de R$ 0.50\n", floor(cinq2));
        
        moedas = moedas-0.5;

        } else{
        printf("0 moedas(s) de R$ 0.50\n");
        }
        


        if((moedas/0.25)>=1){
            vinte2 = moedas/0.25;
            printf("%.0f moedas(s) de R$ 0.25\n", floor(vinte2));     
            moedas = (moedas-0.25);
        }else{
            printf("0 moedas(s) de R$ 0.25\n");
        } 


        
        if((moedas/0.1)>=1){
            dez2 = moedas/0.1;
            printf("%.0f moedas(s) de R$ 0.10\n", floor(dez2));
            
            moedas = (moedas-((floor(dez2))*0.1));

        } else{
            printf("0 moedas(s) de R$ 0.10\n");
        }

        if((moedas/0.05)>=1){
            um2 = moedas/0.05;
            printf("%.0f moedas(s) de R$ 0.05\n", floor(um2));   
        } else{
            printf("0 moedas(s) de R$ 0.05\n");   
        }

        if((moedas/0.01)>=1){
            um2 = moedas/0.01;
            printf("%.0f moedas(s) de R$ 0.01\n", floor(um2));   
        } else{
            printf("0 moedas(s) de R$ 0.01\n");   
        }

*/

    return 0;

}

