import os
os.system('cls')

"""
Argumentos nomeados e não nomeados em funções Python
Argumento nomeado tem nome com sinal de igual
Argumento não nomeado recebe apenas o argumento (valor)

def <nome da função> <(execução de função)>
""" 
def soma(x,y,z):
    # Definição
    print(f'{x=} e {y=} e {z=}| {x + y + z = }')

soma(2,6,1)

# Argumentos nomeados
soma(y=6,x=2,z=1)

soma(6,2,z=1)
soma(6,y=2,z=1)
# soma(6,y=2,z) -> Erro

