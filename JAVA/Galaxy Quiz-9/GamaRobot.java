/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package NYP10Duyuru;

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
        System.out.println(this.Isim+ " Tarafindan -> Bina Yapildi");
    }

    @Override
    public void setBoy() {
        this.boy = 200;
    }

    @Override
    public void agac_dik() {
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
        if (gorev == 0) {
            gorev = 1;
            System.out.println(this.Isim+ "  Yeni gorevi bina yapmaktir.");
        } else {
            gorev = 0;
            System.out.println(this.Isim+ "  Yeni gorevi agac dikmektir.");
        }
    }

    @Override
    public void setIsim(String Isim) {
        this.Isim = Isim;
    }

}
