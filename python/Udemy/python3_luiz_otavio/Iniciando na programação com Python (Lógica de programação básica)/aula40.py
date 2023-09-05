'''Calculadora com while'''

while True:
    #VARIAVEIS DE CONTROLE DE VALIDAÇÃO
    num_valido=None
    operadores=('+-*/')

    while num_valido is None:   #CONTROLE DE VALIDAÇÃO
        try:
            num_1=float(input('\nDigite o primeiro valor: '))
            num_2=float(input('Digite o segundo valor: '))
            num_valido=True
            break
        except:
            num_valido=None
        
        if num_valido is None:
            print('ENTRADA INVÁLIDA TENTE NOVAMENTE\n')
            continue

    opcao=input(
'\n\n\
+ - Soma\n\
- - Subtração\n\
* - Multiplicação\n\
/ - Divisão\n\n\
Selecione a opção: '
        )

    if len(opcao)>1:    #CONTROLE DE VALIDAÇÃO
        print('Digite apenas um operador.')
        continue 
    elif opcao not in operadores: #CONTROLE DE VALIDAÇÃO
        print('Operador Inválido.')
        continue


    elif opcao=='+':    #SOMA
        soma=num_1+num_2
        print(f'\n\nSoma = {soma}\n')

    elif opcao=='-':    #SUBTRAÇÃO
        subtracao=num_1-num_2
        print(f'\n\nSubtração = {subtracao}\n')

    elif opcao=='*':    #MULTIPLICAÇÃO
        mult=num_1*num_2
        print(f'\n\nMultiplicação = {mult}\n')

    elif opcao=='/':    #DIVISÃO
        div=num_1/num_2
        print(f'\n\nDivisão = {div}\n')
        
    inout = input('Você quer [s]air? ').lower().startswith('s') #SAIR DO LOOP
    if inout is True:
        break
        