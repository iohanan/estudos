import os
os.system('cls')
"""
Fatiamento de strings
 012345678
 Olá mundo
-987654321
Fatiamento [i:f:p] [::]
Obs.: a função len retorna a qtd 
de caracteres da str
"""

var = 'Olá Mundo'
print(var[4:])  #a partir do índice 4 até o final
print(var[4:7]) #a partir do índice 4 até o 7
print(len(var)) #conta a quantidade de índices na string
print(var[0:len(var):2])    #percorre toda a string com passo de 2
print(var[0:len(var):3])    #percorre toda a string com passo de 3
print(var[::-1])   #percorre toda a string de trás pra frente(inverte)
print(var[-1:-10:-1])   #percorre toda a string de trás pra frente(inverte)