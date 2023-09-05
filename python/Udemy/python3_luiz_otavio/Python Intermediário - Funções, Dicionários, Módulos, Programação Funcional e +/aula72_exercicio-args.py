import os
os.system('cls')

def multip(*args):
    if bool(args) is False:
        return 0
    total = 1
    for num in args:
        total*=num
    return total
    
def parouimpar(x):
    valor = x%2==0
    if valor:
        return f'{x} é par.'
    return f'{x} é ímpar.'

print(parouimpar(9))
print(parouimpar(8))
print(4*5*1*2*3*7)
m = multip(4,5,1,2,3,7)
print(m)