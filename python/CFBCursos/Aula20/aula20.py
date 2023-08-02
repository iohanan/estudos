#FUNÇÕES

import os
os.system('cls')

def somar(n1, n2):
    r=n1+n2
    print("Soma de",n1,"e",n2,"é",r )

def somas(*num):
    r=0
    for n in num:
        total+=n
    print("Soma:",total)

#somas(5,1,2,3)


#somar(5,2)

def texto(*txt):
    for t in txt:
        print(t)

#texto("Teste", "De", "Função","Python")

def carros(*car):
    for c in car:
        print("Modelo:",c)

carros("Gol","HRV","FOCUS")