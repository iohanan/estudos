package livraria;

/**
 *
 * @author iohanan
 */
public class Autor {
    private String nomeDoAutor;
    private String emailDoAutor;
    private String cpfDoAutor;
    
    void mostrarDetalhes(){
        System.out.println("Autor");
        System.out.println("\tNome: " + nomeDoAutor);
        System.out.println("\tEmail: " + emailDoAutor);
        System.out.println("\tCPF: " + cpfDoAutor);
        
    }
    
    //nomeDoAutor
    public void setNomeDoAutor(String nomeDoAutor){
        this.nomeDoAutor = nomeDoAutor;
    }
    public String getNomeDoAutor(){
        return nomeDoAutor;
    }
    
    //emailDoAutor
    public void setEmailDoAutor(String emailDoAutor){
        this.emailDoAutor = emailDoAutor;
    }
    public String getEmailDoAutor(){
        return emailDoAutor;
    }
    //cpfDoAutor
    public void setCpfDoAutor(String cpfDoAutor) {
        this.cpfDoAutor = cpfDoAutor;
    }
    public String getCpfDoAutor(){
        return cpfDoAutor;
    }

}
