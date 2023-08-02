#CLASSES

import os
os.system('cls')

class Carro:
    velMax=0
    ligado=False
    cor=""

c1=Carro()
c2=Carro()
c3=Carro()

c1.velMax=200
c1.cor="Preto"
c1.ligado=True

print("Celocidade Máxima:",c1.velMax)
print("Cor:",c1.cor)
estado="Sim" if c1.ligado else "Não"
print("Ligado:", estado)
