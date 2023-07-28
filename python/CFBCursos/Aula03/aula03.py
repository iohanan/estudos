#variaveis globais  
num1=num2=res=0

def cn():
    global canal    #definindo variavel global pra puxar de fora da função 
    canal="Curso Python"
    print(canal)

cn()

print(canal)

