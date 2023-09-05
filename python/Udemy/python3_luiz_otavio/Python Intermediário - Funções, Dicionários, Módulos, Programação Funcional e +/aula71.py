import os
os.system('cls')

'''
args -> Argumentos não nomeados
* - *args (empacotamento e desempacotamento)
'''

# Lembre-te de desempacotamento

x,y,*resto = 1,2,3,4,5,6

# print(x,y,resto)

# def soma(x,y):
#     return x+y

def soma(*args):
    # args = list(args)
    # print(args, type(args))
    # for item in args:
    #     print(item)
    
    total = 0
    for num in args:
        total += num
    print(total)
    return total

numeros = 1,2,3,4,5,6,1,1   
soma(1,2,3,4,5,6,1,1)
soma(*numeros)  #o '*' desempacota a tupla


