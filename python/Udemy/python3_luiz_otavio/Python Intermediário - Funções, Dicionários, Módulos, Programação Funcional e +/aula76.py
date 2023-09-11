import os
os.system('cls')

# Dicionários em Python (tipo dict)
# Dicionários são estruturas de dados do tipo
# par de "chave" e "valor".
# Chaves podem ser consideradas como o "índice"
# que vimos na lista e podem ser de tipos imutáveis
# como: str, int, float, bool, tuple, etc.
# O valor pode ser de qualquer tipo, incluindo outro
# dicionário.
# Usamos as chaves - {} - ou a classe dict para criar
# dicionários.
# Imutáveis: str, int, float, bool, tuple
# Mutável: dict, list
# pessoa = {
#     'nome': 'Luiz Otávio',
#     'sobrenome': 'Miranda',
#     'idade': 18,
#     'altura': 1.8,
#     'endereços': [
#         {'rua': 'tal tal', 'número': 123},
#         {'rua': 'outra rua', 'número': 321},
#     ]
# }
# pessoa = dict(nome='Luiz Otávio', sobrenome='Miranda')

humano = {
    'nome': 'Luiz Otávio',
    'sobrenome': 'Miranda',
    'idade': 18,
    'altura': 1.72,
    'enderecos': [
        {'rua': 'tal tal', 'numero': 123},
        {'rua': 'outro outro', 'numero': 890},
    ]
}

print(type(humano))
print(humano['nome'])
print()

def detalhes():
    for chave in humano:
        print(f'{chave} : {humano[chave]}')

def linha(coment=''):
    return print(f'----------------{coment}------------------')
    

#####   Manipulando chaves e valores em dicionários 

print('----------------------------------')
#   Deletando chaves
print(humano['enderecos'][0])
del humano['enderecos'][0]
print(humano['enderecos'])

print('----------------------------------')
#   Criando/alterando chaves

newChave = 'Apelido'
humano[newChave] = 'Zinho'
detalhes()

print('----------------------------------')

humano['Apto'] = 'Não'
detalhes()

os.system('cls')
# Métodos úteis dos dicionários em Python
# len - quantas chaves
# keys - iterável com as chaves
# values - iterável com os valores
# items - iterável com chaves e valores
# setdefault - adiciona valor se a chave não existe


pessoa = {
    'nome': 'Iohanan',
    'sobrenome' : 'Monteiro',
#    'idade' : 900,
}

print(pessoa.keys())    #Mostra as chaves do dict
print(pessoa.values())  #Mostra o conteúdo das chaves
print(pessoa.items())   #Mostra os dois

linha()

for chave in pessoa:
    print(chave,':', pessoa[chave] )

linha()

for chave in pessoa.values():
    print(chave)
    
linha()

pessoa.setdefault('idade', 26)
print(pessoa)

os.system('cls')

# copy - retorna uma cópia rasa (shallow copy) -> apenas valores imutáveis

import copy

p1 = {
    'nome' : 'Fulano',
    'sobrenome' : 'Beltrano',
    'lista' : [1,2,3,4,5]
}
#d2 = d1.copy()  #shallow copy -> apenas valores imutáveis

p2 = copy.deepcopy(p1)
print(p1)
print(p2)

linha()

p2['sobrenome'] = 'Outro'
p2['lista'][0] = 9 
print(p1)
print(p2)

os.system('cls')
# get - obtém uma chave
# pop - Apaga um item com a chave especificada (del)
# popitem - Apaga o último item adicionado
p1 = {
    'nome' : 'Fulano',
    'sobrenome' : 'Beltrano',
    'apelido'   :   'Pessoinha',
}

#print(p1.get('nome1'))

nome = p1.pop('nome')
print(nome)
print(p1)

ultima_chave = p1.popitem() #ultima chave do elemento
print(ultima_chave)
print(p1)

os.system('cls')
# update - Atualiza um dicionário com outro
c1 = {
    'nome' : 'Fulano',
    'sobrenome' : 'Beltrano',
    'apelido'   :   'Pessoinha',
}

c1.update({
    'nome': 'Novo nome',
})

c1.update(idade=30)

tupla = ('aptidão', 'Negada'),

c1.update(tupla)


for chave in c1:
    print(chave,':',c1[chave])