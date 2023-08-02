#FUNÇÕES

import os
os.system('cls')

def somar(num):
    total=0
    for n in num:
        total+=n
    return total

valores=[5,2,3,1]


print("Soma:",somar(valores))