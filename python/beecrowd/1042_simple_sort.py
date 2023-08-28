a, b,c = [int(x) for x in input().split()]
original = [a,b,c]

sequencia = original.copy()
sequencia.sort()

for i in range(len(sequencia)):
    print(sequencia[i])

print('')

for i in range(len(original)):
    print(original[i])
