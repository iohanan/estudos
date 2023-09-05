import os
"""
Faça um jogo para o usuário adivinhar qual
a palavra secreta.
- Você vai propor uma palavra secreta
qualquer e vai dar a possibilidade para
o usuário digitar apenas uma letra.
- Quando o usuário digitar uma letra, você 
vai conferir se a letra digitada está
na palavra secreta.
    - Se a letra digitada estiver na
    palavra secreta; exiba a letra;
    - Se a letra digitada não estiver
    na palavra secreta; exiba *.
Faça a contagem de tentativas do seu
usuário.
"""
palavra_secreta='perfume'
qtd=len(palavra_secreta)
tentativas = 0
letras_acertadas=''


while True:
    letra = input('Digite uma letra: ').lower()
    os.system('cls')
    

    palavra_formada=''

    if len(letra) > 1:
        print('Digite apenas uma letra.')
        print(palavra_formada)
        continue
    
    if letra in palavra_secreta:    #se a letra digitada estiver na palavra secreta então
        letras_acertadas+=letra #salvo a letra acertada nessa string

    for acerto in palavra_secreta:  #percorro o vetor da palavra secreta
        if acerto in letras_acertadas:  #a cada loop se o acerto estiver nas letras acertadas
            palavra_formada+=acerto #o acerto é somado a palavra formada na posição correspondente 
        else:
            palavra_formada+='*'    #se não tiver acerto coloco *

    print(f'{palavra_formada}\n')
    tentativas+=1 
    
    if palavra_formada==palavra_secreta:
        break

print(f'PARABÉNS! VOCÊ ACERTOU.\n'

f'Tentativas: {tentativas}'    
)