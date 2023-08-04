#CLASSES

import os
os.system('cls')


class Carro:
    model=""
    codigo=""
    velMax=0
    ligado=False
    cor=""
    def __init__(self,cod,mod,vel,lig,c):
        self.codigo=cod
        self.model=mod
        self.velMax=vel
        self.ligado=lig
        self.cor=c
    def mostrar(self):
        print("Codigo...........:",self.codigo)
        print("Modelo...........:",self.model)
        print("Velocidade Máxima:",self.velMax)
        print("Cor..............:",self.cor)
        estado="Sim" if self.ligado else "Não"
        print("Ligado...........:", estado)
        print('----------------------------')
    def ligar(self):
        self.ligado=True
    def desligado(self):
        self.ligado=False
    
    def andar(self):
        if self.ligado:
            print(self.codigo,'Andando')
        else:
            print(self.cofigo,'Carro desligado.')
        


c1=Carro("123","Golf",200,False,"Preto")
c2=Carro("456","Astra",120,False,"Prata")
c3=Carro("789","HB20",350,False,"Vermelho")

c1.ligar()
c1.mostrar()
c2.mostrar()
c3.mostrar()


c1.model="Celta"
c1.mostrar()

c1.andar()