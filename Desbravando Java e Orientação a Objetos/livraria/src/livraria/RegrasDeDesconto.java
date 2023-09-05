package livraria;

import sun.applet.Main;

/**
 *
 * @author iohanan
 */
public class RegrasDeDesconto {
    public static void main(String[] args) {
        Autor fLano = new Autor("Fulano da Silva");
        Livro livrofLano = new Livro(fLano);
        livrofLano.setValor(59.9);
        
        //Livros
        System.out.println("Valor original: " + livrofLano.getValor());
        if (!livrofLano.descontoDe(0.3)) {
            System.out.println("Desconto não pode ser maior que 30%");
        }else{
            System.out.println("Valor do desconto: " + livrofLano.getValor());
        }
        
        Ebook ebookFLano = new Ebook(fLano);
        ebookFLano.setValor(29.9);
        //Ebooks
        System.out.println("Valor original: " + ebookFLano.getValor());
        
        if (!ebookFLano.descontoDe(0.1)) {
            System.out.println("Desconto não pode ser maior que 30%");
        }else{
            System.out.println("Valor do desconto: " + ebookFLano.getValor());
        }
    }
}
