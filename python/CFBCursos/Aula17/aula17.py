import  os

#Chave/Key - Valor/Value
carro={
    "Fabricante":"Honda",
    "Modelo":"HRV",
    "Ano":"2016",
    "Cor":"Prata"
}

#fab=carro.get("Fabricante")
fab=carro["Fabricante"]

carro["Cor"]="Preto"


for x in carro:
    print(x)    #chave

print("\n")
for x in carro:    
    print(carro[x]) #valor

print("\n")
for x in carro:    
    print(x+":",carro[x]) #chave/valor

print("\n")
for c,v in carro.items():   #chave/valor
    print(c+": "+v)

""" PESQUISAR UMA CHAVE
while True:
    pesq=input("Digite a chave: ")
    if pesq=="0":
        break
    elif pesq in carro:
        print("============Sim,",pesq,"é uma chave")
    else:
        print("============Não,",pesq,"não é uma chave")
    print("\nDigite 0 para sair\n")
"""

print("Tamanho do Dictionary: " + str(len(carro)))  #tamanho do dictionary

carro["Cambio"]="Auto" #adicionando elemento ao carro

print("\n")
for x in carro:
    print(x+":",carro[x])

#deletendo uma chave
del carro["Cambio"]
#carro.pop("Cambio")
carro.clear()  #limpar o dictionary


carro={
    "Carro1":{      #string
        "Fabricante":"Honda",
        "Modelo":"HRV",
        "Ano":"2016",
        "Cor":"Prata"
    },
    "Carro2":{
        "Fabricante":"Volkswagem",
        "Modelo":"Golf",
        "Ano":"2016",
        "Cor":"Preto"
    },
    "Carro3":{
        "Fabricante":"Ford",
        "Modelo":"Focus",
        "Ano":"2014",
        "Cor":"Branco"
    }
}
os.system('cls')

Carro1={      #string
        "Fabricante":"Honda",
        "Modelo":"HRV",
        "Ano":"2016",
        "Cor":"Prata"
    }
Carro2={
        "Fabricante":"Volkswagem",
        "Modelo":"Golf",
        "Ano":"2016",
        "Cor":"Preto"
    }
Carro3={
        "Fabricante":"Ford",
        "Modelo":"Focus",
        "Ano":"2014",
        "Cor":"Branco"
    }

Carros={
        "C1":Carro1,
        "C2":Carro2,
        "C3":Carro3
    }

#PESQUISAR UMA CHAVE
while True:
    pesq=input("Digite o codigo do carro: ")
    if pesq=="0":
        break
    elif pesq in Carros:
        for x in Carros[pesq]:
            print(x,":", Carros[pesq][x])
    else:
        print(pesq,"não é uma chave")
    print("\nDigite 0 para sair\n")
