import os
os.system('cls')

def multip(*args):
    if bool(args) is False:
        return print(0)
    total = 1
    for num in args:
        total*=num
    return print(total)
    
def parouimpar(x):
    valor = x%2==0
    if valor:
        print('É par.')
    else:
        print('É impar.')

parouimpar(9)
parouimpar(8)
print(4*5*1*2*3*7)
multip(4,5,1,2,3,7)
multip()