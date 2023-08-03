num=int(input())
tmp=0
while True:
    if tmp!=(num-1):
        print('Ho', end='')
    else:
        break
    print(' ',end='')
    tmp+=1

print('Ho!')

#print("Ho "*(int(input()) - 1) + "Ho!") solução alternativa