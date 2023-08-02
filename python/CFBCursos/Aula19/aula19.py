#FUNÇÕES

import os
os.system('cls')

n1=10
n2=5

def somar():
    r=n1+n2
    print("Soma de",n1,"e",n2,"é",r )

def subt():
    r=n1-n2
    print("Subtração de",n1,"e",n2,"é",r )

def mult():
    r=n1*n2
    print("Multiplicação de",n1,"e",n2,"é",r )

def calculos():
    somar()
    subt()
    mult()

calculos()
