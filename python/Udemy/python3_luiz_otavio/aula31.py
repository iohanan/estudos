# ID -> Revela a posição da variável na memória.
v1 = 'a'
v2 = 'a'

print(id(v1)) #como possuem valores iguais os ids são iguais
print(id(v2))

# Flag (Bandeira) - Marcar um local
# None = Não valor
# is e is not = é ou não é (tipo, valor, identidade)
condicao = False
passou_no_if = None #Flag

if condicao:
    passou_no_if='Passou.'
    print('Faça algo.')
else:
    print('Não faça algo.')

print(passou_no_if is None, passou_no_if) #True: Passou.