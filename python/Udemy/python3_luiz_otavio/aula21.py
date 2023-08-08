import os
os.system('cls')
# Operadores lógicos
# and (e) or (ou) not (não)
# and - Todas as condições precisam ser verdadeiras.
# Se qualquer valor for considerado falso, a expressão inteira será avaliada naquele valor
# São considerados falsy (que vc já viu)
# 0 0.0 '' False
# Também existe o tipo None que é usado para representar um não valor

'''entrada = input('[E]ntrar ou [S]air: ')
senha= input('Senha: ')
senha_entrada='123456'
if entrada=='E'and senha==senha_entrada:
    print('Entrar')
else:
    print('Sair')'''

#Avaliação de curto circuito: Checa apenas até o False
print(True and True and False and True)
print(True and True and 0 and True)