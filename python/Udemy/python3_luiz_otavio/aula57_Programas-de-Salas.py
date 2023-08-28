"""
Atividade pessoal em desesnvolvimento com base na aula 57 do curso de python.
"""
import os
os.system('cls')
salas = [
    # 0        1
    ['Maria', 'Helena', ],  # 0
    # 0
    ['Elaine', ],  # 1
    # 0       1       2
    ['Luiz', 'João', 'Eduarda', ],  # 2
]

##### LIMPAR A TELA
def LimparTela():
    os.system('cls')

##### FUNÇÃO ADICIONAR SALAS
def Adicionar_salas():
    nova_sala=[]
    while True:
        LimparTela()
        print('0 - Sair')
        
        sele_create = input('Digite o nome do Aluno:\n')
        if sele_create == '0':break
        nova_sala.append(sele_create)
    return nova_sala

##### FUNÇÃO LISTAR AS SALAS
def Listar_Salas():
    LimparTela()
    
    numeros_de_sala = []
    for i, alunos in enumerate(salas):
        print('SALA', i+1)
        numeros_de_sala.append(i+1)
    try:    
        sele_listar = int(input('Selecione a sala.\n\
        SALA: '))
        if sele_listar in numeros_de_sala:
            LimparTela()    
            for i, alunos in enumerate(salas):
                n_sala=i+1
                if sele_listar == n_sala:
                    print(f'\nSALA {n_sala}')
                    print('Alunos:')
                    for aluno in alunos:
                        print('\t',aluno)
                    print('\n')
        else:
            LimparTela()
            print('Número da sala não está na lista.')

    except ValueError:
        print('Insira um valor válido.')
    except Exception:
        print('ERRO')

    
    
while True:
    print('0 - SAIR')
    try:
        opcao = int(input('1 - Listar salas\n'\
            '2 - Adicionar nova sala\n'\
            'Opção: '))

        #LISTAR AS SALAS
        if opcao == 1:
            Listar_Salas()
        
        #ADICIONAR SALAS
        if opcao == 2:
            salas.append(Adicionar_salas())
        
        #ENCERRAR O PROGRAMA
        if opcao == 0:  
            print('--ENCERRADO--')
            break
        
        

    except ValueError:
        LimparTela()
        print('Digite um valor válido.')
        
        