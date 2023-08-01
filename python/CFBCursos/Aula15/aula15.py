import os
os.system('cls')



t_carros=("HRV","GOLF","ARGO")
#t_carros[2]="Focus" #não é possível modificar uma tupla diretamente
#l_carros[2]="focus"

print("Tupla antes da modificação: \n"+str(t_carros))

l_carros=list(t_carros) #converte a tupla em lista
l_carros[2]="focus"    #modifico a lista
t_carros=tuple(l_carros)    #converte a lista em tupla novamente



print("\nTupla depois da modificação: \n")

for x in t_carros:
    print(x)

