import os
os.system('cls')


# Exercício - sistema de perguntas e respostas


perguntas = [
    {
        'Pergunta': 'Quanto é 2+2?',
        'Opções': ['1', '3', '4', '5'],
        'Resposta': '4',
    },
    {
        'Pergunta': 'Quanto é 5*5?',
        'Opções': ['25', '55', '10', '51'],
        'Resposta': '25',
    },
    {
        'Pergunta': 'Quanto é 10/2?',
        'Opções': ['4', '5', '2', '1'],
        'Resposta': '5',
    },
]

count=0
for pergunta in perguntas:
    print(f'Pergunta:', pergunta['Pergunta'],end='\n\n')
    print('Opções:')
    

    for num, opcao in enumerate(pergunta['Opções']):
        print(f'{num})',opcao)
    
    num_opcoes = len(pergunta['Opções'])-1
    
    while True:
        escolha = input(f'Escolha uma opção(0 a {num_opcoes}): ')
        
        while not escolha.isdigit():
            escolha = input('Digite um valor válido: ')
        
        qtd_opcoes = int(escolha)>=0 and int(escolha)<=(len(pergunta['Opções'])-1)

        if qtd_opcoes:
            break
    
    if pergunta['Opções'][int(escolha)] == pergunta['Resposta']:
        print('Acertou!')
        count+=1
    else:
        print('Errou!')
    
    # resposta = pergunta['Resposta']
    # if escolha == resposta:
    #     print('Acertou!')
    #     count+=1
    # else:
    #     print('Errou!')
    
    print()

print(f'Você acertou {count} de {len(perguntas)} perguntas')

