package livraria;

/**
 *
 * @author iohanan
 */
public class Livro {
    private String titulo;
    private String descricao;
    private double valor;
    private String isbn;
    private Autor autor;

    public Livro(Autor autor){
        this();
        this.autor = autor;
    }


    public Livro(){
        this.isbn = "000 - 000 - 000";
        this.titulo = "Desconhecido";
    }
    public void mostrarDetalhes(){
        String mensagem = "Livro";
        System.out.println(mensagem);
        System.out.println("\tNome: " + titulo);
        System.out.println("\tDescrição: " + descricao);
        System.out.println("\tValor: " + valor);
        System.out.println("\tISBN: " + isbn);
        //autor.mostrarDetalhes();

        if (this.temAutor()) {
            autor.mostrarDetalhes();
        }
        System.out.println("-------------------------------------------");
 
        }
    
    //nome
    public void setTitulo(String titulo){
        this.titulo = titulo;
    }
    public String getTitulo(){
        return titulo;
    }
    //descricao
    public void setDescricao(String descricao){
        this.descricao = descricao;
    }
    public String getDescricao(){
        return descricao;
    }
    //valor
    public double getValor(){
        return valor;
    }
    public void setValor(double valor){
        this.valor = valor;
    }
    //isbn
    public void setIsbn(String isbn){
        this.isbn = isbn;
    }
    //autor
    public void setAutor(Autor autor){
        this.autor = autor;
    }
    public Autor getAutor(){
        return autor;
    }
    
    
    public boolean descontoDe(double porcentagem){
        if (porcentagem > 0.3) {
            return false;
        }
        this.valor -=this.valor*porcentagem;
        return true;
    }
    
    boolean temAutor(){
        return this.autor != null;
    }
    
     
    
    
}


