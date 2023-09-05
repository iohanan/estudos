frase = 'O Python é uma linguagem de programação '\
    'multiparadigma. '\
    'Python foi criado por Guido van Rossum.'

qtd_mais_apareceu=0 
letra_mais_apareceu=''
i=0
while i<len(frase):
    
    letra_atual=frase[i]
    contador=frase.count(letra_atual)
    
    i+=1
    if letra_atual == ' ':
        continue
    
    if qtd_mais_apareceu<contador:
        qtd_mais_apareceu=contador
        letra_mais_apareceu=letra_atual

print(f'A letra que apareceu mais vezes foi \'{letra_mais_apareceu}\' {qtd_mais_apareceu}x')