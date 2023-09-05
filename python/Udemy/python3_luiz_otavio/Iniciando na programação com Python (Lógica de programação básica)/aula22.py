import os
os.system('cls')

# Operadores lógicos
# and (e) or (ou) not (não)
# or - Qualquer condição verdadeira avalia
# toda a expressão como verdadeira.
# Se qualquer valor for considerado verdadeiro,
# a expressão inteira será avaliada naquele valor.
'''
entrada = input('[E]ntrar ou [S]air: ')
senha= input('Senha: ')

senha_entrada='123456'

if entrada=='E' or 'e' and senha==senha_entrada:
    print('Entrar')
else:
    print('Sair')'''

senha = input('Senha: ') or 'Sem senha'
print(senha)