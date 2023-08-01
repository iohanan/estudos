import random
import  os
os.system('cls')

erros=0
sorteado=random.randrange(0,100)

print("\nBEM VINDO AO GAME\nDigite um valor de 0 a 100 até acertar.")
jogador=int(input("Digite seu número: "))

while (jogador != sorteado):

    erros+=1    #contagem de erros
    os.system('cls')
    if jogador<sorteado:
        print("Está abaixo!")
    elif jogador>sorteado:
        print("Está acima!")
    else:
        break
    jogador=int(input("Digite seu número: "))

os.system('cls')
print("Número Sorteado:",sorteado)
print("Parabéns!!! Você ganhou.")
print("Erros:",erros-1)