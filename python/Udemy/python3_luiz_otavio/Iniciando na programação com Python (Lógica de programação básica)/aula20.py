import os
os.system('cls')

primeiro_valor = input('Digite um valor: ')
segundo_valor = input('Digite outro valor: ')

if primeiro_valor>segundo_valor:
    print(f'O {primeiro_valor=} é maior que {segundo_valor=}')
else:
    print(f'O {segundo_valor=} é maior que {primeiro_valor=}')
