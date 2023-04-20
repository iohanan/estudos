/*
atv 1181
*/

/*
0 1 2

1 2 3   0
4 5 6   1
7 8 9   2 s=24 / m= 
*/
#include<stdio.h>

int main(){

    int n, i, j, x=12;
    float m[x][x], soma, media;
    char cha;

    scanf("%d", &n);
    scanf(" %c", &cha);
    
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            scanf("%f", &m[i][j]);
        }
    }


    if(cha=='S'){
        soma=0;
        for(i=0;i<x;i++){
            soma=soma+m[n][i];
        }
        printf("%.1f", soma);
    }else if(cha=='M'){
            soma=0;
            for(i=0;i<x;i++){
                soma=soma+m[n][i];
                media=soma/(x);
            }
            printf("%.1f\n", media);
    }

    return 0;
}