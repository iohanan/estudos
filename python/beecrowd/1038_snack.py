class Produto:
    def __init__(self,c,n,p):
        self.code=c
        self.nome=n
        self.price=p

snack1 = Produto(1,'Cachorro Quente', 4.0)
snack2 = Produto(2,'X-Salada', 4.5)
snack3 = Produto(3,'X-Baacon', 5.0)
snack4 = Produto(4,'Torrada simples', 2.0)
snack5 = Produto(5,'Refrigerante', 1.5)
snacks = 4.0, 4.5, 5.0, 2.0, 1.5
#         0    1    2    3    4            
codigo,qtd = [int(x) for x in input().split()]
count=1
for x in snacks:
    if codigo == count:
        total=x*qtd
        print(f'Total: R${total:.2f}')
    count+=1