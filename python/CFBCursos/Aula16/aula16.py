#limpar a tela
import os
os.system('cls')

l_carros=["HRV", "GOL", "FOCUS", "ARGO"]  #array/List

m_carros=[
    ["Modelo","HRV"],
    ["Fabricante","Honda"],
    ["Ano",2016]
]

m_carros.append(["Cor","Prata"])




for l,c in m_carros:
    print(l + " | " + str(c) + "\n")


