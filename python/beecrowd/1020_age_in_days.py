num = int(input())

year = num//365
month = (num%365)//30
days = (num%365)%30

print(f'{year} ano(s)')
print(f'{month} mes(es)')
print(f'{days} dia(s)')