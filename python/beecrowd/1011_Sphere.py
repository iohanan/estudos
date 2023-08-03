"""Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R) . The formula to calculate the volume is: (4/3) * pi * R3. Consider (assign) for pi the value 3.14159."""

radius=float(input())
pi=3.14159

vol=(4/3)*pi*radius**3

print(f'VOLUME = {vol:.3f}')