/*
atv 1837
*/
#include<stdio.h>


int main()
{
    int a, b,q,r,k;
    scanf("%d %d", &a, &b);

    q=a/b;
    r=a%b;

    printf("1.1\nq=%d r=%d\n\n", q, r);
    
    if(b<0)
        k=b*(-1);

    if(r<0 || r>=k)
    {
        
    }
        

    printf("%d %d\n", q, r);
    return 0;
}

