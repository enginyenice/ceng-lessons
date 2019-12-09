/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nyp10Ders;

class AnaSinif{
    public void yaz(){
        System.out.println("Ana sinif");
    }
}

class Tureyen1 extends AnaSinif{
    @Override
    public void yaz(){
        System.out.println("Tureyen 1");
    }
}
class Tureyen2 extends AnaSinif{
    @Override
    public void yaz(){
        System.out.println("Tureyen 2");
    }
}
class Tureyen3 extends AnaSinif{
    @Override
    public void yaz(){
        System.out.println("Tureyen 3");
    }
}
public class Main_Class {
    
    public static void yaz(AnaSinif t){
             t.yaz();
         }
     public static void main(String[] args) {
         Tureyen1 t1 = new Tureyen1();
         Tureyen2 t2 = new Tureyen2();
         Tureyen3 t3 = new Tureyen3();
         yaz(t1);
         yaz(t2);
         yaz(t3);
     }
}
