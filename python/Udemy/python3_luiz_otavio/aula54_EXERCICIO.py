'''
Faça uma lista de compras 
inserir apagar ou listar
não quebrar com indices inexistentes 
'''
import os
os.system('cls')


lista = []

def listagem():   #FUNÇÃO PARA MOSTRAR A LISTA
   if len(lista)==0: #SE A LISTA NÃO TIVER ITEM
      print('[LISTA VAZIA]\n')
   else:
      print('\tLISTA\nNº\tITEM\n')
      for indice, item in enumerate(lista):
            print(f'{indice+1}\t{item}')
      print()


while True:
   opcao = input('[0]sair\n\n\nSelecione a opção:\n\
[i]nserir [a]pagar [l]ista\n\
Selecione: '\
).lower() 

   
   opcoes=['i','a','l','0']
   
   condição_de_entrada = len(opcao)==1 and opcao in opcoes #CONDIÇÃO DE ENTRADA

   if condição_de_entrada: 
      print('ENTROU')
      os.system('cls')

      if opcao=='i':  #INSERIR
         insercao=input('Insira na lista: ')
         lista.append(insercao)
      

      elif opcao == 'a': #APAGAR
         listagem()
         try:
            apagar = int(input('\n[DIGITE QUALQUER OUTRO VALOR PARA VOLTAR]\nSelecione o índice que deseja apagar: '))
            os.system('cls')            
            print('Item deletado:', apagar,lista[apagar-1])
            lista.pop(apagar-1)
            #del lista[apagar-1]
         except:  #SE DIGITADO OUTRO VALOR VOLTA PARA O MENU PRINCIPAL
            os.system('cls')
            ...
         #except ValueError:
            #print('[ERRO: Digite um valor válido]')
         #except IndexError:
            #print('[ERRO: Índice incorreto]')
     
      elif opcao=='l':   #LISTAR
         listagem()
      
      elif opcao=='0':   #SAIR
         break
   else:
      os.system('cls')
      print('\n[ERRO: Digite um valor válido]\n')
      continue

      
    