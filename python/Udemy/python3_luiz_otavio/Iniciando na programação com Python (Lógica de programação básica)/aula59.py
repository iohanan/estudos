import os
os.system('cls')

#Desempacotamento  em chamadas de métodos e funções

string = 'ABCD'
lista = ['Maria', 'Helena','Eduarda','João', 'Alfredo', 'Fulano']
tupla = 'Python', 'é', 'legal'
salas = [
    # 0        1
    ['Maria', 'Helena', ],  # 0
    # 0
    ['Elaine', ],  # 1
    # 0       1       2
    ['Luiz', 'João', 'Eduarda'],  # 2
]

'''a,b,*resto,c,d = lista
print(a,b,resto,c,d)'''

for nome in lista:
    print(nome, end=' ')
print()
print(*lista)
print(*string)
print(*tupla)
print(*salas, sep='\n')
