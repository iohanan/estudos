import os
os.system('cls')

"""
Introdução ao try/except
try -> tentar executar o código
except -> ocorreu algum erro ao tentar executar
"""

num_str = input(
    'Vou dobrar o numero que você digitar: '
)

try:
    num_float = float(num_str)
    print('Float: ', num_float)
    print(f'O dobro de {num_float:.1f} é {num_float*2:.1f}')
except:
    print('ERROR')

'''
if num_str.isdigit():
    num_float = float(num_str)
    print(f'O dobro de {num_float:.1f} é {num_float*2:.1f}')
else:
    print('Isso não é um número válido')
'''