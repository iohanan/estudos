#include <stdio.h>


int main ()
{

	//Valores discretos, sem sinal;
	unsigned short int x, j, i, iniMatriz, fimMatriz, k;

	while (1)
	{

		scanf("%hd", &x);
		//Declaração de matriz de x variado;
		short m[x][x];

		if (x == 0)
			return 0;

		iniMatriz = 0;
		fimMatriz = x;
		k = 1;

		while(1)
		{
			//Preenche matrizes de x menor cada vez que o laço reinicia;
			for (i = iniMatriz; i < fimMatriz; i++)
				for (j = iniMatriz; j < fimMatriz; j++)
					m[i][j] = k;

			if (fimMatriz == 0)
				break; 

			fimMatriz--;
			iniMatriz++;
			k++;

		}

		//Imprime a matriz;
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < x; j++)
			{
				if (j == 0)
					printf("%3hd", m[i][j]);
				else
					printf("_%3hd", m[i][j]);

			}

			printf("\n");
		}

		printf("\n");

	}
}

