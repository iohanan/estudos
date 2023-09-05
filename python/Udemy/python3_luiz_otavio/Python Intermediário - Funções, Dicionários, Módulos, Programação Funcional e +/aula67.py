import os
os.system('cls')

"""
Valores padrão para parâmetros
Ao definir uma função, os parâmetros podem
ter valores padrão. Caso o valor não seja
enviado para o parâmetro, o valor padrão será
usado.
Refatorar: editar o seu código.
"""

def soma(x,y,z=None):
    # Definição
    if z is not None:
        print(f'{x=} e {y=} e {z=} | {x + y + z = }')
    else:
        print(f'{x=} e {y=} | {x + y = }')
        

soma(2,6)
soma(2,6,1)