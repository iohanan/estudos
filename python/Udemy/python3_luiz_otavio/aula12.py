import os
os.system('cls')

nome='Iohanan Alves'
altura=1.80
peso=95

imc = float(peso)/altura**2 #IMC =  PESO/(ALTURA X ALTURA)

print(f'{nome} possui {altura}m de altura, pesa {peso}Kg e tem IMC = {imc:.2f}.')