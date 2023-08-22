#for in com listas

lista = ['Maria', 'Helena', 'Luiz']
count = 0
lista.append('Iohanan')

for nome in lista:
    print(f'Índice {count}: {nome}', type(nome))
    count+=1

print('')

#outra forma
indices = range(len(lista))

for x in indices:
    print(x, lista[x], type(lista[x]))