import os
os.system('cls')
"""
Formatação básica de strings
s - string
d - int
f - float
.<número de dígitos>f
x ou X - Hexadecimal
(Caractere)(><^)(quantidade)
> - Esquerda
< - Direita
^ - Centro
= - Força o número a aparecer antes dos zeros
Sinal - + ou -
Ex.: 0>-100,.1f
Conversion flags - !r !s !a 
"""

var = 'ABC'

print(f'.{var}.')
print(f'.{var: >10}.')  #identação para a direita
print(f'.{var: <10}.')  #identação para a esquerda
print(f'.{var: ^10}.')  #identação no meio
print(f'.{var:*^10}')  #preenchimento nas identações

print(f'{1000.4564876524654:0=+1,.1f}')

print(f'O hexadecimal de 1995 é {1995:04X}')

print(f'{var!r}')
