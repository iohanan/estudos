#include <stdio.h>

    int main() 
    {
        int x;
        char jogada[5][9]={"pedra","papel","tesoura","lagarto","Spock"};
        int index = 0;
        char str1[9]={"pedra"};
        // Enquanto os caracteres forem iguais, corre os vectores.
        while( str1 == jogada[index] )
        {
            // Verifica se alguma das strings terminou.
            // Se sim, sai do loop. Caso contrario, analisa o próximo carácter.
            if( str1 == '\0' || jogada[index] == '\0' )
                break;
    
            ++index;
        }

        // Se ambos terminaram, as strings contidas são iguais.
        if( str1 == '\0' && jogada[index] == '\0' )
            x=1;
        else
            x=2;

        printf("%d\n", x);

        return 0;
}
