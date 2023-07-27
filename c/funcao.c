#include<stdio.h>

void linha(char ch, int ln)
{
    for (int i = 0; i < ln; i++)
    {
        putchar(ch);
    }
        putchar('\n');
}


int main()
{
    char caractere;
    int tamanhoLinha;

    scanf("%c %d", &caractere, &tamanhoLinha);

    linha(caractere, tamanhoLinha);
    
    return 0;
}
