"""
Imprecisão de ponto flutuante
Double-precision floating-point format IEEE 754
https://en.wikipedia.org/wiki/Double-precision_floating-point_format
https://docs.python.org/pt-br/3/tutorial/floatingpoint.html
"""
import decimal #SOMENTE UTILIZADO EM CASAS DECIMAIS MUITO GRANDES

num_1 = decimal.Decimal('0.1')
num_2 = decimal.Decimal('0.7')
num_3 = num_1 + num_2

print(num_3)
print(f'{num_3:.2f}')
print(round(num_3, 2))