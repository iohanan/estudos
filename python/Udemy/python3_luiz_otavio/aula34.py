'''
Repetições
While (enquanto)
Executa uma ação enquanto uma condição é verdadeira
'''

condicao = True

while condicao:
    nome = input('Qual o seu nome? ')
    print(f'Seu nome é {nome}')

    if nome:
        break