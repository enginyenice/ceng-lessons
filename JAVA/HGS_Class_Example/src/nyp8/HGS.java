/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nyp8;

/**
 *
 * @author engin
 */
public class HGS {

    private static int tipBir = 2;
    private static int tipIki = 4;
    private static int tipUc = 7;

    public HGS() {

    }

    public  void setTip(int a,int b, int c) {
        tipBir = a;
        tipIki = b;
        tipUc  = c;
        yolUcretleri();
        
    }

    
    public int gettTipBir() {
        return tipBir;
    }

    public int gettTipIki() {
        return tipIki;
    }

    public int gettTipUc() {
        return tipUc;
    }
    public void yolUcretleri(){
        System.out.println("-------Yol Ucretleri-------");
        System.out.println("Tip 1: "+ gettTipBir()+"₺");
        System.out.println("Tip 2: "+ gettTipIki()+"₺");
        System.out.println("Tip 3: "+ gettTipUc()+"₺");
        System.out.println("---------------------------\n");
    }

}
