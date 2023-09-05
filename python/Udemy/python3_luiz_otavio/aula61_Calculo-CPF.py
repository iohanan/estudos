import os
import re
import sys
os.system('cls')

entrada = '931.119.448-40  '


cpf = re.sub(r'[^0-9]','',entrada)

if cpf[0]*len(cpf) == cpf:
    print('CPF Inválido: Dados sequenciais.')
    sys.exit()

print(f'{cpf[:3]}.{cpf[3:6]}.{cpf[6:9]}-{cpf[9:11]}')

##### Cálculo do primeiro dígito.
mult=10
soma=0
for num in cpf[:9]:
    soma+=int(num)*mult
    mult-=1

primeiro_digito=(soma*10)%11

'''
Se o resultado anterior for maior que 9:
    resultado é 0
contrário disso:
    resultado é o valor da conta
'''
primeiro_digito = primeiro_digito if primeiro_digito<=9 else 0

print('Primeiro digito: ', primeiro_digito)

##### Cálculo do segundo dígito do cpf.
'''
Colete a soma dos 9 primeiros dígitos do CPF,
MAIS O PRIMEIRO DIGITO,
multiplicando cada um dos valores por uma
contagem regressiva começando de 11
'''

mult=11
soma=0
for num in cpf[:9]:
    soma+=int(num)*mult
    mult-=1
    if mult == 2:
        soma+=mult*primeiro_digito

segundo_digito=(soma*10)%11

segundo_digito = 0 if segundo_digito>9 else segundo_digito 

print('Segundo dígito: ', segundo_digito)
digitos = [primeiro_digito, segundo_digito]

##### Validação do CPF
digitos = [primeiro_digito, segundo_digito]
cpf_digitos = [int(cpf[9]), int(cpf[10])]


validacao = True if digitos == cpf_digitos else False

print(validacao)