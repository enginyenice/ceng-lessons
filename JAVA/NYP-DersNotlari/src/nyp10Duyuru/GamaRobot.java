package nyp10Duyuru;

/**
 *
 * @author engin
 */
public class GamaRobot implements Alfa, Beta {

    private int boy;
    private String Isim;
    private int gorev; // 0 Agac Dik 1 Bina Yap

    public GamaRobot() {
        this.boy = 200;
        this.Isim = "GAMA";
        this.gorev = 0;
    }

    @Override
    public void bina_yap() {
        if(gorev == 1)
            System.out.println(this.Isim+ " Tarafindan -> Bina Yapildi");
    }

    @Override
    public void setBoy(int boy) {
        this.boy = boy;
    }

    @Override
    public void agac_dik() {
        if(gorev == 0)
            System.out.println(this.Isim+ " Tarafindan -> Agac Dikildi");
    }

    public void calis() {
        if (gorev == 0) {
            agac_dik();
        } else if (gorev == 1) {
            bina_yap();
        }

    }

    public void gorev_degistir() {
        System.out.println("\n-----Gorev Degistirme Emri-----");
        if (gorev == 0) {
            gorev = 1;
            System.out.println(this.Isim+ "  Yeni gorevi bina yapmaktir.");
        } else {
            gorev = 0;
            System.out.println(this.Isim+ "  Yeni gorevi agac dikmektir.");
        }
        System.out.println("-------------------------------\n");
    }

    @Override
    public void setIsim(String Isim) {
        this.Isim = Isim;
    }
    @Override
    public void bilgiler() {
        System.out.println("Adim: "+this.Isim+ " Boyum: "+ this.boy+ "cm bina yaparim ve agac dikerim.");
    }

}
