curso="Curso de Python"

#print(curso[0:15])
#print(curso.strip())   #omite as linhas brancas antes e depois da string
#print(curso.strip().lower()) #lower = minúsculo
#print(curso.strip().upper())    #UPPER=MAIÚSCULO
#print(curso.replace("Python", "Outro Título"))
a=curso.split(" ")  #quebra a string no indicador declarado, no caso " " (espaço)
print("Array na posição 0: "+ a[0])

print("Tamanho: "+str(len(curso))) #len=tamanho da string
