# Sets - Conjuntos em Python (tipo set)
# Conjuntos são ensinados na matemática
# https://brasilescola.uol.com.br/matematica/conjunto.htm
# Representados graficamente pelo diagrama de Venn
# Sets em Python são mutáveis, porém aceitam apenas
# tipos imutáveis como valor interno.

# Criando um set
# set(iterável) ou {1, 2, 3}
s1 = set() #vazio
s2 = {'Luiz',1,2,3} #com dados
print(s1, type(s1))
print(s2, type(s1),end='\n\n')
# Sets são eficientes para remover valores duplicados de iteráveis.
# - Seus valores serão sempre únicos;
# - Não aceitam valores mutáveis;
# - não tem índexes;
# - não garantem ordem;
# - são iteráveis (for, in, not in)
set1 = {1,2,2,4,4,4,2,2,3,3,3,3,3,'teste'}
print(f'remoção de valores duplicados\n{set1} {type(set1)}')
print(3 in set1)
for i in set1:
    print(i)
print('\n\n')

# Métodos úteis:
# add, update, clear, discard
lista = set()
lista.add(1)
lista.update([2])
lista.update((2,3,4,'teste','nomes',4545))

lista.discard('nomes')
lista.discard(4545)

print(lista, type(lista))


# Operadores úteis:
# união | união (union) - Une
# intersecção & (intersection) - Itens presentes em ambos
# diferença - Itens presentes apenas no set da esquerda
# diferença simétrica ^ - Itens que não estão em ambos