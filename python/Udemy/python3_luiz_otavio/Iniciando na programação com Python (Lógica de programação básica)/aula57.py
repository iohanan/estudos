"""
Lista de listas e seus índices
"""
import os
salas = [
    # 0        1
    ['Maria', 'Helena', ],  # 0
    # 0
    ['Elaine', ],  # 1
    # 0       1       2
    ['Luiz', 'João', 'Eduarda'],  # 2
]
'''
print(salas[0])
print(salas[0][1])
print(salas[2])
print(salas[2][2])
'''

for sala, aluno in enumerate(salas):
    print('SALA',sala+1)
    for estudante in aluno:
        print(estudante)
    print()