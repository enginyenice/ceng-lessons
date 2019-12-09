package nyp10Duyuru;

/**
 *
 * @author engin
 */
class  BetaRobot implements Beta{
    private int boy;
    private String Isim;
    BetaRobot(){
        this.boy = 140;
        this.Isim = "BETA";
    }
    
    @Override
    public void agac_dik() {
        System.out.println(this.Isim+ " Tarafindan -> Agac Dikildi");
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
        System.out.println("Adim: "+this.Isim+ " Boyum: "+ this.boy+ "cm agac dikerim.");
    }
    
}