package nyp10Duyuru;

/**
 *
 * @author engin
 */

class  AlfaRobot implements Alfa{
    private int boy;
    private String Isim;
    AlfaRobot(){
        this.boy = 360;
        this.Isim = "ALFA";
    }
    
    @Override
    public void bina_yap() {
        System.out.println(this.Isim+ " Tarafindan -> Bina yapildi");
    }

    @Override
    public void setBoy(int boy) {
        this.boy = boy;
    }

    @Override
    public void setIsim(String Isim) {
        this.Isim = Isim;
    }

    @Override
    public void bilgiler() {
        System.out.println("Adim: "+this.Isim+ " Boyum: "+ this.boy+ "cm bina yaparim.");
    }
    
    
}
