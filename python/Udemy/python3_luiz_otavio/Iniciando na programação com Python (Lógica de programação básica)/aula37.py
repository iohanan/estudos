contador = 0

while contador <= 100:
    contador += 1

    if contador%2==0:
        print('É um par.')
        continue

    print(contador)

    if contador == 41:
        break


print('Acabou')