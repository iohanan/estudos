package livraria;

/**
 *
 * @author iohanan
 */
public class RegistroDeVendas {
    public static void main(String[] args) {
        
        Autor mAniche = new Autor("");
        mAniche.setNomeDoAutor("Mauricio Aniche");
        
        LivroFisico TDDevelopFisico = new LivroFisico(mAniche);
        TDDevelopFisico.setTitulo("Test-Driven Development");
        
        Ebook TDDevelopEbook = new Ebook(mAniche);
        TDDevelopEbook.setTitulo("Test-Driven Development");
        
        TDDevelopFisico.mostrarDetalhes();
    }
}
