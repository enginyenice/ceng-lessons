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
public class Gemi implements Nakliye{
    double tonaj = 10000;

    @Override
    public void yukle(double yuk) {
        if(yuk < tonaj)
        {
            System.out.println("Gemiye yükleniyor");
        }
    }

    @Override
    public void bosalt(double yuk) {

        if(yuk < tonaj)
        {
            System.out.println("Gemiden indiriliyor");
        }
    }
    
}
