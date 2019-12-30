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
public class Arac extends HGS {

    private static int adet = 1;
    private int cardID;
    private String plaka;
    private int tip;
    private int bakiye;
    private int toplamHarcama;

    public Arac(String plaka, int tip) {
        this.plaka = plaka;
        this.cardID = adet;
        this.tip = tip;
        this.bakiye = 150;
        this.toplamHarcama = 0;
        adet++;
    }
    public void paraliYol(int km){
        int harcama = 0;
        if(this.tip == 1)
        {
            harcama = km * super.gettTipBir();
        }
        else if(this.tip == 2)
        {
            harcama = km * super.gettTipIki();
        }
        else if(this.tip == 3)
        {
            harcama = km * super.gettTipUc();
        }
        this.bakiye = this.bakiye - harcama;
        this.toplamHarcama = this.toplamHarcama + harcama;
        
        
        
        
        
    }
    public void bilgi(){
        System.out.println("Plaka: "+this.plaka+" Bakiye: "+this.bakiye+"₺ Toplam Harcama: "+ this.toplamHarcama+"₺");
        
    }
    public void bakiyeYukle(int a)
    {
        this.bakiye = this.bakiye + a;
        System.out.println("\n-------Bakiye Yükleme------");
        System.out.println("Plaka: "+this.plaka+" Yüklenen Miktar: "+ a+"₺"+" Yeni Bakiye: "+bakiye+"₺");
        
    }
    

}
