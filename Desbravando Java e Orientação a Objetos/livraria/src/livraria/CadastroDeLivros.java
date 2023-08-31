package livraria;

/**
 *
 * @author iohanan
 */
public class CadastroDeLivros {
    public static void main(String[] args) {
        
        Autor rTurini = new Autor();
        rTurini.nomeDoAutor = "Rodrigo Turini";
        rTurini.emailDoAutor = "rodrigo.turini@caelum.com.br";
        rTurini.cpfDoAutor = "465.123.12";
        
        Livro revista = new Livro();
        revista.nome = "Java";
        revista.descricao = "Curso de JAVA";
        revista.valor = 59.90;
        revista.isbn = "12345-678";
        revista.autor = rTurini;
        revista.mostrarDetalhes();
        
        Autor pSilveira = new Autor();
        pSilveira.nomeDoAutor = "Paulo Silveira";
        pSilveira.emailDoAutor = "paulo.silveira@caelum.com.br";
        pSilveira.cpfDoAutor = "123.456.78";
        
        Livro dicionario = new Livro();
        dicionario.nome = "Aurelio";
        dicionario.descricao = "Encontre suas palavras";
        dicionario.valor = 23.90;
        dicionario.isbn = "45687-987";
        dicionario.autor = pSilveira;
        dicionario.mostrarDetalhes();
        
        System.out.println("Valor da revista: "+revista.valor);
        if (revista.descontoDe(0.4)) {
                    System.out.println("Com desconto: " + revista.valor);
        }else{
            System.out.println("Sem desconto.");
        }
        

    }

}
