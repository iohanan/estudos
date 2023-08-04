#CLASSES

import os
os.system('cls')

class Base:
    def __init__(self, nome, time, forca, municao):
        self.nome=nome
        self.time=time
        self.forca=forca
        self.municao=municao
    def info(self):
        print('Nome...:',self.nome)
        print('Time...:',self.time)
        print('Força..:',self.forca)
        print('Munição:',self.municao)
    
class Guarda(Base):
        def __init__(self, nome, time):
            self.forca=100
            self.municao=50
            super().__init__(nome, time, self.forca,self.municao)

s1=Guarda("Teste", 1)

s1.info()