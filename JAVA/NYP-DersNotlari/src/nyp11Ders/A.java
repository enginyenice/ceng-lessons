/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nyp11Ders;

/**
 *
 * @author engin
 */
public class A {
    private int a;
    private int b;

    /**
     *
     * @param a
     */
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
    
    
    
    
}
