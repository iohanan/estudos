import os
import random
import sys
os.system('cls')

try:
    quantidade = int(input('Gerador de CPF: '))
except ValueError:
    print('Valor inválido.')
    sys.exit()

for i in range(quantidade):
    cpf = ''

    for i in range(9):
        cpf+=(str(random.randint(0,9)))

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

    ##### Geração de CPF
    cpf_gerado=cpf
    cpf_gerado+=str(primeiro_digito)
    cpf_gerado+=str(segundo_digito)

    print(f'{cpf_gerado[:3]}.{cpf_gerado[3:6]}.{cpf_gerado[6:9]}-{cpf_gerado[9:11]}')