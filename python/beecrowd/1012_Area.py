"""
Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.
OUTPUT
TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000
"""

a,b,c = [float(x) for x in input().split()]

triang=(1/2)*a*c
circ=c**2*3.14159
trap=((a+b)/2)*c
square=b*b
rect=a*b

print(f'TRIANGULO: {triang:.3f}\nCIRCULO: {circ:.3f}\nTRAPEZIO: {trap:.3f}\nQUADRADO: {square:.3f}\nRETANGULO: {rect:.3f}')

