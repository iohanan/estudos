"""
Faça um programa que peça ao usuário para digitar um número inteiro,
informe se este número é par ou ímpar. Caso o usuário não digite um número
inteiro, informe que não é um número inteiro.
"""
'''
num = input('Digite um número inteiro: ')

try:
  inteiro = int(num)
  if inteiro%2==0:
    print(f'{inteiro} é par.')
  else:
    print(f'{inteiro} é ímpar.')
except:
  print('Não é um valor válido.')
'''

"""
Faça um programa que pergunte a hora ao usuário e, baseando-se no horário 
descrito, exiba a saudação apropriada. Ex. 
Bom dia 0-11, Boa tarde 12-17 e Boa noite 18-23.
"""
'''
num=input('Que horas são? ')

hora = int(num)
dia = hora>=0 and hora<=11
tarde = hora>=12 and hora<=17
noite = hora>=18 and hora<=23

if dia:
  print(f'Bom dia: {hora}')
elif tarde:
  print(f'Boa tarde: {hora}')
elif noite:
  print(f'Bom noite: {hora}')
'''


"""
Faça um programa que peça o primeiro nome do usuário. Se o nome tiver 4 letras ou 
menos escreva "Seu nome é curto"; se tiver entre 5 e 6 letras, escreva 
"Seu nome é normal"; maior que 6 escreva "Seu nome é muito grande". 
"""

nome = input('Digite seu pimeiro nome: ')

curto = len(nome) <=4
medio = len(nome)>= 5 and len(nome)<=6
longo = len(nome)>6

if curto:
    print('Seu nome é curto')
elif medio:
    print('Seu nome é normal')
elif longo:
    print('Seu nome é muito grande')


