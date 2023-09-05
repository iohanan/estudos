package livraria;

/**
 *
 * @author iohanan
 */
public class CadastroDeLivros {
    public static void main(String[] args) {
        
        Autor rTurini = new Autor("Rodrigo Turini");
        rTurini.setNomeDoAutor("Rodrigo Turini");
        rTurini.setEmailDoAutor("rodrigo.turini@caelum.com.br");
        rTurini.setCpfDoAutor("465.123.12");
        
        
        Livro revista = new Livro(rTurini);
        revista.setTitulo("JAVA");
        revista.setDescricao("Curso de JAVA");
        revista.setValor(59.90);
        revista.setIsbn("12345-678");
        revista.mostrarDetalhes();
        
        Autor pSilveira = new Autor("Paulo Silveira");
        pSilveira.setNomeDoAutor("Paulo Silveira");
        pSilveira.setEmailDoAutor("paulo.silveira@caelum.com.br");
        pSilveira.setCpfDoAutor("123.456.78");
        
        Livro dicionario = new Livro(pSilveira);
        dicionario.setTitulo("Aurelio");
        dicionario.setDescricao("Encontre suas palavras");
        dicionario.setValor(23.90);
        dicionario.setIsbn("45687-987");
        dicionario.setAutor(pSilveira);
        dicionario.mostrarDetalhes();
        
        Ebook livrEbook = new Ebook(rTurini);
        livrEbook.setTitulo("Java 8 Prático");
        livrEbook.mostrarDetalhes();
        

        
        System.out.println("Valor da revista: "+revista.getValor());
        if (revista.descontoDe(0.3)) {
                    System.out.println("Com desconto: " + revista.getValor());
        }else{
            System.out.println("Sem desconto.");
        }
        

    }

}
