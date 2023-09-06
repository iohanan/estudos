import os
os.system('cls')

def multiplicar(num):
    def resultado(qtd):
        return num*qtd
    return resultado


valor = input('Qual a tabuada desejada? ')
for n in range(11):
    tabuada = multiplicar(int(valor))
    print(f'{valor} x {n}  = {tabuada(n)}')