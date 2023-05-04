/*
@autor: iohanan;
data: 04/05/2023
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int ladoA, ladoB, porcentagem, ladoTotal;   

    while (1)
    {
        scanf("%d", &ladoA);

        if (ladoA==0)
            break;
        
        scanf("%d %d",&ladoB, &porcentagem);

        ladoTotal=sqrt((((ladoA*ladoB)*100)/porcentagem));

        printf("%d\n", ladoTotal);

        
    }
    return 0;
}