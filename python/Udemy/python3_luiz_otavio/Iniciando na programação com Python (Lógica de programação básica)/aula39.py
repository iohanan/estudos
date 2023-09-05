#EXERCÍCIO
nome = 'Iohanan Alves'

tam = len(nome)

print(tam)

#IMPRIMINDO NO FORMATO
count = 0
while count < tam:
    
    print('*'+ nome[count], end='')   
    count+=1
print('*')

#CRIANDO UMA NOVA VARIÁVEL NO FORMATO
count = 0
novo_nome=''
while count < tam:
    letra = nome[count]
    novo_nome+='*'+letra
    count+=1

print(f'Nova String: {novo_nome}')