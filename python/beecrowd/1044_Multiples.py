import os
os.system('cls')

'''
Read two integer values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.
Input

The input has two integer numbers.
Output

Print the relative message to the input as stated above.
Input Sample 	    Output Sample

6 24                Sao Multiplos

6 25                Nao sao Multiplos

N = d*q+r
2,3,5,7
'''

x, y=map(int, input().split())

def multiples(a,b):
    if b>a:
        temp = a
        a = b
        b = temp
    
    if a%b==0:
        print('Sao Multiplos')
    else:
        print('Nao sao Multiplos')
        
        
multiples(x,y)