/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nyp11Ders;

import java.io.IOException;



/**
 *
 * @author engin
 */
public class Main_Class {

    

    public static void main(String[] args) throws IOException {
        /*
                try {
            
            throw new ArithmeticException("0'a bolme");
            
        } catch (ArithmeticException e) {
            System.out.println("Istisna durum "+ e);
        }
        System.out.println("Throw sonucu mesaj");
         */
        
        
        A a=new A(5,6);
        A.dosyaYaz(" Bu bir denemedir...");
        A.dosyadanOku();
        System.out.println(a.toString());
        
    }
}

