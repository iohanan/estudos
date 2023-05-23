/*
@autor: iohanan;
data: 16/05/2023;
atv 1847
*/
#include<stdio.h>
#include<math.h>

float DISTANCIA(int UM, int DOIS);

int main()
{
    int a, b,c; //input
    float distAB, distBC;

    scanf("%d %d %d", &a, &b, &c);
    printf(":");

    if (a==b)
    {
        if (c > b)
            printf(")\n");
        else
          printf("(\n");

        
        return 0;
    }
    else if (c==b)
    {
        if (a > b)
            printf(")\n");
        else
          printf("(\n");

        return 0;
    }
    
   
    distAB = DISTANCIA(a, b);
    distBC = DISTANCIA(b, c);

    //printf("%f\n", distAB);
    //printf("%f\n", distBC);


    if (a > b && c > b)
    {
        printf(")\n");    
    }
    else if (a < b && c < b)
    {
        printf("(\n");  
    }
    else if (a < b && c > b)
    {
        if (distBC>=distAB)
            printf(")\n");
        else
            printf("(\n");
    }else if (a > b && c < b)
    {
        if (distBC>=distAB)
            printf("(\n");
        else
            printf(")\n");        
    }
    return 0;
}

/*
    distAB = raiz (xB – xA)² + 1
    distBC = raiz (xC – xB)² + 1
*/
float DISTANCIA(int UM, int DOIS)
{
    float dist;
    dist = sqrt(pow((DOIS - UM), 2)+1);
    return dist;
}
