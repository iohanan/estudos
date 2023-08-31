package livraria;

/**
 *
 * @author iohanan
 */
public class CalculadoraDeEstoque {
    public static void main(String[] args) {
        
        double livroJava8 = 59.90;
        double livroTDD = 59.90;
        double soma = 0;
        //double soma = livroJava8 + livroTDD;
        
        for (int i = 0; i < 35; i++) {
            soma += 59.9;            
        }
        System.out.println("O valor da soma é " + soma);
        

        if (soma < 150) {
            System.out.println("Seu estoque está muito baixo!");
        }if (soma>=2000) {
            System.out.println("Seu estoque está muito alto!");
        }
        else{
            System.out.println("Seu estoque está bom.");
        }

    }
}
