/*
@autor: iohanan;
data: /05/2023;
atv 1847
*/
#include<stdio.h>
/*
1   - I
2   - II
3   - III
4   - IV
5   - V
6   - VI
7   - VII
8   - VIII
9   - IX
10  - X


50  - L
100 - C
500 - D
1000- M


*/
#define UM 'I'
#define CINCO 'V'
#define DEZ 'X'

void converterRomanos (int n);

int main()
{
    int n;
    
    scanf("%d", &n);

    converterRomanos(n);        
    
    printf("\n");
    return 0;
}


void converterRomanos (int n)
{
    char num[8];
    char seqR[]={'I','V','X'};
    char seqD[]={3,5,10};
    int count=0;

        for (int i = 0; i < n; i++) 
        {
            if (i<seqD[i])
            {
                num[i] = seqR[i];
            }

        }
        puts(num);

}