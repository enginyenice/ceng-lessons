/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nyp11Ders;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

/**
 *
 * @author engin
 */
public class A {

    private int a;
    private int b;


    public A(int a) {
        this.a = a;
    }

    /**
     *
     * @return
     */
    public int getA() {
        return a;
    }

    /**
     *
     * @param a
     */
    public void setA(int a) {
        this.a = a;
    }

    /**
     *
     * @return
     */
    public int getB() {
        return b;
    }

    /**
     *
     * @param b
     */
    public void setB(int b) {
        this.b = b;
    }

    /**
     *
     * @param a
     * @param b
     */
    public A(int a, int b) {
        this.a = a;
        this.b = b;
    }

    @Override
    public String toString() {
        return "A{" + "a=" + a + ", b=" + b + '}';
    }

    public static void dosyaYaz(String str) throws IOException {
        BufferedWriter bWriter = new BufferedWriter(new FileWriter("deneme.txt", true));
        bWriter.write(str);
        bWriter.close();

    }
    public static void dosyadanOku() throws FileNotFoundException, IOException{
        String str;
        try (BufferedReader objReader = new BufferedReader(new FileReader("deneme.txt"))) {
            while((str = objReader.readLine()) != null)
            {
                
                System.out.println(str);
                
            }
            objReader.close();
        }
    }

}
