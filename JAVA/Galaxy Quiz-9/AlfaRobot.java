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
    public void setBoy() {
        this.boy = 360;
    }

    @Override
    public void setIsim(String Isim) {
        this.Isim = Isim;
    }
    
}
