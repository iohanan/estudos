import os
os.system('cls')
'''
Closure e funções que retornam outras funções
'''
def criar_saudacao(saudacao):
    def saudar(nome):
        return f'{saudacao}, {nome}!'
    return saudar


nomes_lista = ['Maria', 'João', 'Alfredo']




bom_dia = criar_saudacao('Bom dia')
boa_noite = criar_saudacao('Bom noite')

for nome in nomes_lista:
    print(bom_dia(nome))
