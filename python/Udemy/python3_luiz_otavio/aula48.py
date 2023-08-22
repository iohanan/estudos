"""
Listas em Python
Tipo list - Mutável
Suporta vários valores de qualquer tipo
Conhecimentos reutilizáveis - índices e fatiamento
Métodos úteis:
    append - Adiciona um item ao final
    insert - Adiciona um item no índice escolhido
    pop - Remove do final ou do índice escolhido
    del - apaga um índice
    clear - limpa a lista
    extend - estende a lista
    + - concatena listas
Creat  Read Update Delete   (CRUD)
Criar, Ler, Alterar, Apagar = lista[i] 
"""
#        +01234 índices positivos
#        -54321 índices negativos
string = 'ABCDE'    #5 caracteres
lista_a = list()
#         0     1           2           3   4
#         -5    -4          -3          -2  -1  
lista_a = [123, True, 'Iohanan Monteiro',1.2,[]]
#print(lista, bool(lista), type(lista))
lista_a[-3]='Fula De Tal'
#print(lista, bool(lista), type(lista))

lista_a = [10,20,30,40]
numero=lista_a[2]
print(lista_a, ' Adicionado,',numero)


#.pop
valor_removido=lista_a.pop(2)
print(lista_a, ' Removido pelo ".pop",',valor_removido)

#.append
valor_adicionado=50
lista_a.append(valor_adicionado)
print(lista_a, ' Adicionado por último com ".append",',valor_adicionado)

#del
lista_a.append('Teste')
del lista_a[-1]
print(lista_a,'adicionado "Teste" e em seguida removido com "del"')

#.clear
lista_a.clear()
print(lista_a,'Lista deletada com "Clear"')

#.insert
lista_a.insert(0,1)
lista_a.insert(1,2)
lista_a.insert(2,3)
print(lista_a,'Lista formada pelo .insert')

lista_b = [4,5,6]
lista_c=lista_a+lista_b
print('LISTA concatenada com +:',lista_c)

#lista_a extendida por ".extend"
lista_a.extend(lista_b)
print('lista_a extendida por ".extend":',lista_a)

"""
Cuidados com dados mutáveis
= - copiado o valor (imutáveis)
= - aponta para o mesmo valor na memória (mutável)
"""

lista1=['João', 'Maria']
lista2=lista1.copy()

print('Lista 1 :',lista1)
print('Lista 2 :',lista2)

#Com o .copy se eu alterar a lista 1 a lista 2 não vai ser alterada.
lista1[0]='Qualquer'
print('Lista 1 :',lista1)
print('Lista 2 :',lista2)