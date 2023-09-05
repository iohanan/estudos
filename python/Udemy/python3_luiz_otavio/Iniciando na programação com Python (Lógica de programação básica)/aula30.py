import os
os.system('cls')
'''
CONSTANTE = "Variáveis" que não vão mudar
Muitas condições no mesmo if (ruim)
    <-  Contagem de complexidade (ruim)
'''

#VARIAVEIS

velocidade  = 61     #velocidade atual do carro
local_carro = 100    #local que o carro está na estrada

#CONSTANTES

RADAR_1     = 60        #velocidade máxima do RADAR 1
LOCAL_1     = 100       #local do RADAR 1
RADAR_RANGE = 1         #a distancia onde o radar pega

#VARIAVEIS DE CONTROLE

radar_1_vel     =velocidade>RADAR_1 #se a velocidade do carro está maior que o radar 1
radar_1_passou  = local_carro>=(LOCAL_1-RADAR_RANGE) and local_carro<=(LOCAL_1+RADAR_RANGE) #se localização atual do carro está no radar 1
radar_1_multa   = radar_1_vel and radar_1_passou    #se o carro foi multado

#OUTPUT RADAR 1

if radar_1_vel:
    print('Velocidade do carro excedeu o limite do RADAR 1')

if radar_1_passou:
    print('Carro passou no RADAR 1.')

if radar_1_multa:
    print('Carro multado no RADAR 1')

