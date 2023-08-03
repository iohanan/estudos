a,b,c = [int(x) for x in input().split()] 

x=(a+b+abs(a-b))/2
maior=(x+c+abs(x-c))/2


print(type(a,b,c))
print(maior,'eh o maior')
print('%d eh o maior' %maior)