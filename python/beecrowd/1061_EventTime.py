import re
import os
os.system('cls')


def remodelar(string):
    string = re.split('[^0-9]', str(string))
    string = [line.strip() for line in string if line.strip() != ""]
    return string
    

diaInicial = input().split()
diaInicial = remodelar(diaInicial)
print(diaInicial)

dataInicial = input().split()
dataInicial = remodelar(dataInicial)
horaInicial,minInicial,segInicial = dataInicial 
print(horaInicial, minInicial, segInicial)

diaFinal = input().split()
diaFinal = remodelar(diaFinal)
print(diaFinal)

dataFinal = input().split()
dataFinal
dataFinal = re.split('[^0-9]', str(dataFinal))
dataFinal = [line.strip() for line in dataFinal if line.strip() != ""]
horaFinal,minFinal,segFinal = dataFinal
print(horaFinal, minFinal, segFinal)




