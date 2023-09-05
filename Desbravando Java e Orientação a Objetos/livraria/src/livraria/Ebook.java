package livraria;

/**
 *
 * @author iohanan
 */
public class Ebook extends Livro{
    private String waterMark;

    public Ebook(Autor autor) {
          super(autor);
    }

    public String getWaterMark() {
        return waterMark;
    }

    public void setWaterMark(String waterMark) {
        this.waterMark = waterMark;
    }
    
    @Override
    public boolean descontoDe(double porcentagem){
        if (porcentagem > 0.15) {
            return false;
        }
/*
double desconto = this.getValor()*porcentagem;
this.setValor(this.getValor() - desconto);
*/
        return super.descontoDe(porcentagem);
    }
}
