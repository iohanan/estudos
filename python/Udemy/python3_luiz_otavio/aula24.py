import os
os.system('cls')

#Operadores in e not in
#Strings são iteráveis(navegáveis)
# 0 1 2 3 4 5
# O t a v i o
#-6-5-4-3-2-1
nome = 'Otávio'
print(nome[2])
print(nome[-5])

print('ávio' in nome)   #True
print('ávio' not in nome)   #False

nome = input('Digite o seu nome: ')
encontrar = input('Digite o quer encontrar: ')

if encontrar in nome:
    print(f'{encontrar} está em {nome}')
else:
    print(f'{encontrar} não está em {nome}')
    

