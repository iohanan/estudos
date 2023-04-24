/*
atv 1142
*/

#include<stdio.h>

int main()
{
    
    int n, i, j;    //controladores

    scanf("%d", &n);

    for (i=1; i <= (n*4); i++)
    {
        if(i%4==0)
        {
            printf("PUM\n");
        } else
        {
            printf("%d ", i);
        }
    }
    

    return 0;
}
