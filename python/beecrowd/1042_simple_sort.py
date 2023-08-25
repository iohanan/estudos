a, b,c = [int(x) for x in input().split()]
original = [a,b,c]

sequencia = list(original)
sequencia.sort()

for i in range(3):
    print(sequencia[i])

print('')

for i in range(len(original)):
    print(original[i])
