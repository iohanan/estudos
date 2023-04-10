#include <stdio.h>
<<<<<<< HEAD
double rondo(double number)
{
    return (number >= 0) ? (number + 0.001) : (number - 0.001);
}

int main () {

   int h1, m1;
   float tempM, tempH;

    scanf("%d", &h1);

    tempH = rondo((h1/60));

    printf("valor inteiro: %.0f\n", tempH);


}