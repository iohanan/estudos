"""
enumerate - enumera iteráveis (índices)
"""

lista=['Maria', 'Helena','Luiz']
lista.append('João')
print(lista)

lista_enumerada = list(enumerate(lista))
print(lista_enumerada)

for item in lista_enumerada:
    indice, nome = item
    print(indice, nome)

print()
    
#Outra forma
for indice, nome in lista_enumerada:
    print(indice, nome, lista[indice])
