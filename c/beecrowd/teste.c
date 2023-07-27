#include<stdio.h>

//char troca(char *a, char b);   //testando protótipos
void Calc(float *a, int num, float *xmin, float *xmax);
int main(){
     
    float v[] = {1,2,3,4,5,6,7,8,9};
    float Maior, Menor;

    Calc(v, 9, &Menor, &Maior);

    printf("O MAIOR numero do vetor e: %f\nO MENOR numero do vetor e: %f\n", Maior, Menor);
     
    return 0;
}

void Calc(float *a, int num, float *xmin, float *xmax)
{

    *xmin=*xmax=*a;

    for (int i = 0; i < num; i++)
    {
        if (*xmin>a[i]) *xmin=a[i];
        if (*xmax<a[i]) *xmax=a[i];        
    }
    
}


/*char troca(char*a, char b)   
{
    for (int i = 0; a[i]!='\0'; i++)
    {
        a[i] = b;

    }
        return a;
}*/
