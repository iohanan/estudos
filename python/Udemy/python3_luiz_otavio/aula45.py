import os
os.system('cls')
'''
Iterável -> str, range, etc (__iter__)
Iterador -> quem sabe entregar um valor por vez
next -> me entregue o próximo valor
iter -> me entregue seu iterador
'''
'''
texto = "Luiz".__iter__()
func_iter=iter(texto)

print(texto)
print(func_iter)

print(texto.__next__())
print(texto.__next__())
print(texto.__next__())
print(texto.__next__())

print(next(texto))
print(next(texto))
print(next(texto))
print(next(texto))'''

texto = "Luiz".__iter__()
func_iter=iter(texto)

while True:
    try:
        letra= next(func_iter)
        print(letra)
    except StopIteration:
        break