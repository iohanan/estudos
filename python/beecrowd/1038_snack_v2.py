#Segunda versão utilizando método ennumerate()

codigo_solicitado,qtd = [int(x) for x in input().split()]

snacks_prices = [4.0, 4.5, 5.0, 2.0, 1.5]
lista_enumerada = list(enumerate(snacks_prices, start=1))


for code, price in lista_enumerada:
    if code==codigo_solicitado:
        print(f'Total: R$ {price*qtd:.2f}')