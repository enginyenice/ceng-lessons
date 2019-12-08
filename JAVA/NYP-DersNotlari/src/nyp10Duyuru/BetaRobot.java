/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nyp10Duyuru;

/**
 *
 * @author engin
 */
class  BetaRobot implements Beta{
    private int boy;
    private String Isim;
    BetaRobot(){
        this.boy = 360;
        this.Isim = "BETA";
    }
    
    @Override
    public void agac_dik() {
        System.out.println(this.Isim+ " Tarafindan -> Agac Dikildi");
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