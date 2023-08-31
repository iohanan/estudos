package livraria;

/**
 *
 * @author iohanan
 */
public class RegrasDeDesconto {
    public static void main(String[] args) {
        Livro periodico = new Livro();
        periodico.setValor(60.78);
        
        if(periodico.descontoDe(0.4)){
            System.out.println("Desconto: "+periodico.getValor());
        }
        
    }
    
 
    
    
    

}
