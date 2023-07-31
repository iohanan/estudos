#include <stdio.h>
#include<math.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double area, n, raio;
    n=3.14159;
    scanf("%lf", &raio);
    area=n*pow(raio, 2);

    printf("A=%.4lf", area);
    return 0;
}