snacks_prices = 4.0, 4.5, 5.0, 2.0, 1.5
#                0    1    2    3    4            
codigo,qtd = [int(x) for x in input().split()]
count=1
for item in snacks_prices:
    if codigo == count:
        total=item*qtd
        print(f'Total: R$ {total:.2f}')
    count+=1