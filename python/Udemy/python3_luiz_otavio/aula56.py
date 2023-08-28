"""
split e join com list e str
split - divide uma string (list)
join - une uma string
"""
frase = 'Olha só, que coisa interessante.'

'''#lista_palavras = frase.split()  #separa em uma lista sempre que tem um espaço

lista_palavras_prim = frase.split(',')  #separa em uma lista sempre que tem uma vírgula

lista_palavras = []

for i, frase in enumerate(lista_palavras_prim):
    lista_palavras.append(lista_palavras_prim[i].strip())
    
print(lista_palavras)
print(lista_palavras_prim)

frases_unidas = ', '.join(lista_palavras)
print(frases_unidas)'''

listar_palavras = frase.split(' ')
print(listar_palavras)

formar_frase = ' '.join(listar_palavras)
print(formar_frase)
print('\n\n')

listar_somente_palavras = frase.translate(str.maketrans('.,','  ')).strip().split(' ')


print(f'somente palavras: {listar_somente_palavras}')