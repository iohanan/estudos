#FUNÇÕES lambda/anonimas

import os
os.system('cls')

soma=lambda a,b:a+b
mul=lambda a,b,c:(a+b)*c
#print((lambda a,b:a+b)(3,2))

#print(mul(2,3,3))
#print(soma(5,3))

r=lambda x,func:x+func(x)
res=r(2, lambda x:x*x)
print(res)
res=r(2, lambda x:x+3)
print(res)