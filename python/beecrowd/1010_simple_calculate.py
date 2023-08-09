p1_code, p1_qtd, p1_price=input().split()
p2_code, p2_qtd, p2_price=input().split()


total=(float(p1_price)*int(p1_qtd))+(float(p2_price)*int(p2_qtd))

print(f'VALOR A PAGAR: R$ {total:.2f}')