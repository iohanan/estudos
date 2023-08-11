'''Calculadora com while'''

while True:
    num_1=input('Digite o primeiro valor: ')
    num_2=input('Digite o segundo valor: ')
    
    opcao=input(
        '\n\n\
        1 - Soma\n\
        2 - Subtração\n\
        3 - Multiplicação\n\
        4 - Divisão\n\n\
        0 - Sair\n\n\
        Selecione a opção: '
        )
    if opcao=='0':  #SAIR
        break
    elif opcao=='1':    #SOMA
        soma=num_1+num_2
        print('Soma = ', soma)
        
        