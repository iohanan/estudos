#include<stdio.h>

int main(){
	
	char tipoCombustivel; //A OU G
	double nLitros, totalA, totalG, tA = 2.9, tG = 3.3;


	printf("INSIRA QUANTIDADE DE COMBUSTIVEL (L): ");
	scanf("%lf", &nLitros);	

	
	while(1){
		printf("INSIRA O TIPO DE COMBUSTIVEL(A/G):");
		scanf(" %c", &tipoCombustivel);

			
		if(tipoCombustivel == 'A'||tipoCombustivel == 'a'){
			printf("\nCombustivel selecionado: A\n");
			if(nLitros <= 20){ 	//ate 20l 3% de desconto
				totalA = (nLitros*tA)-(nLitros*tA*0.03);
				printf("Valor total para %.2lfL: %.2lf\n", nLitros, totalA);
				break;
		} else if(nLitros > 20){ 	//mais 20l 5% de desconto
					totalA = (nLitros*tA)-(nLitros*tA*0.05);
					printf("Valor total para %.2lfL: %.2lf\n", nLitros, totalA);
					break;
			}
		}
		if(tipoCombustivel == 'G'||tipoCombustivel == 'g'){
			printf("\nCombustivel selecionado: G\n");
			if(nLitros <= 20){ 	//ate 20l 4% de desconto
				totalG = (nLitros*tG)-(nLitros*tG*0.03);
				printf("Valor total para %.2lfL: %.2lf\n", nLitros, totalG);
				break;
			} else if(nLitros > 20){ 	//mais 20l 6% de desconto
				totalG = (nLitros*tG)-(nLitros*tG*0.05);
				printf("Valor total para %.2lfL: %.2lf\n", nLitros, totalG);
				break;
			}
		}
		printf("\nVALOR INCORRETO.\nValores cadastrados:\nA - Alcool\nG - Gasolina\n\n");
		continue;
	}
}