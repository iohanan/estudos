import os
os.system('cls')


a = 'A'
b = 'B'
c = 1.123
string='a={prim}, b={sec}, repete a={prim} e b={sec} e c={flut:.2f}'
formato=string.format(
    prim=a,sec=b,flut=c
)

print(formato)