"""
Curso="Curso de Python"
canal="CFB Cursos"

palavra="python"

res=palavra.upper() in Curso.upper()
"""

cidade="Manaus"
dia=15
mes="Janeiro"
ano=2020
canal="CFB Cursos"
data="{}, {} de {} de {}\n\"{}\""   #placeholders

"""
\'  \"  \n(quebra linha)  \r(enter)  \t(tabulação)  \b(backspace)
"""



print(data.format(cidade,dia,mes,ano,canal))




