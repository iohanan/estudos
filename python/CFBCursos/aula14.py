import os
#inicialização de vriável de controle

carros=[]
carro=input("Digite o novo carro: ")

while carro != "-1":
    print("Carro adicionado com sucesso!")
    carros.append(carro)
    carro=input("Digite o novo carro: ")
os.system('cls')

for x in carros:
    print(x)

print("\nFim do programa")






"""
carros=["HRV","Golf","Argo","Onix","Focus"]
tam=len(carros)
i=0
while i<tam:
    print(carros[i]+"\n")
    i+=1 #i=i+1
print("Fim do loop")
"""

