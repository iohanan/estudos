import math

alpha,beta,crom = map(float,input().split())

delta = beta**2-4*alpha*crom

if alpha==0 or delta<0:
    print('Impossivel calcular')
else:
    raiz_delta=math.sqrt(delta)

    r1 = (-beta+raiz_delta)/(2*alpha)
    r2 = (-beta-raiz_delta)/(2*alpha)

    print(f'R1 = {r1:.5f}')
    print(f'R2 = {r2:.5f}')

