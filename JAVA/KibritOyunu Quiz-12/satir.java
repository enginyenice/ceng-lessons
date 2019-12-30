/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package kibritoyunu;

/**
 *
 * @author engin
 */
public class satir {

    private int satirNo;
    private int cubukSayisi;

    public satir(int sN) {
        satirNo = sN;
        cubukSayisi = (2 * sN) - 1;
    }

    public satir() {
        satirNo = -1;
        cubukSayisi = -1;
    }

    public int getCubukSayisi() {
        return cubukSayisi;
    }

    public int getSatirNo() {
        return satirNo;
    }

    void ciz() {
        for (int i = 0; i < cubukSayisi; i++) {
            System.out.print(" | ");
        }
        System.out.println("");
    }

    boolean cubukAl(int cS) {

        if (cS > cubukSayisi || (cS > 3 || cS < 0)) {
            return false;
        } else {
            cubukSayisi = cubukSayisi - cS;
            return true;
        }

    }
}
