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
public class main {
    public static void main(String[] args) {
       
       Arac arac0 = new Arac("26 FY 384", 1);
       Arac arac1 = new Arac("26 TT 001", 1);
       Arac arac2 = new Arac("26 AB 222", 2);
       Arac arac3 = new Arac("26 KK 323", 3);
       
       System.out.println("Default Ucretlendirme");
       arac0.yolUcretleri();
        
       
        
       arac0.paraliYol(10);
       arac0.setTip(4,4,4);
       arac1.paraliYol(5);
       arac2.paraliYol(10);
       arac3.paraliYol(10);
       
       arac0.bilgi();
       arac1.bilgi();
       arac2.bilgi();
       arac3.bilgi();
       arac0.bakiyeYukle(100);
       
    }
}
