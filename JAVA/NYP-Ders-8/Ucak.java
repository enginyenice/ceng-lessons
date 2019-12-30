/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ders9;

/**
 *
 * @author engin
 */
public class Ucak implements Nakliye{
    double tonaj = 80;
   @Override
    public void yukle(double yuk) {
        if(yuk < tonaj)
        {
            System.out.println("Uçağa yükleniyor");
        }
    }

    @Override
    public void bosalt(double yuk) {

        if(yuk < tonaj)
        {
            System.out.println("Uçaktan indiriliyor");
        }
    }
    
}
