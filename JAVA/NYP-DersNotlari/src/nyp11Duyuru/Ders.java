/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nyp11Duyuru;

/**
 *
 * @author engin
 */
public class Ders {
    //Ad	ve	dönem	String,	not	ise	int	olsun
    private String ad;
    private String donem;
    private int not;
    

    public Ders(String ad, String donem, int not) {
        this.ad = ad;
        this.donem = donem;
        this.not = not;
    }

    public Ders() {
    }

    public String getAd() {
        return ad;
    }

    public void setAd(String ad) {
        this.ad = ad;
    }

    public String getDonem() {
        return donem;
    }

    public void setDonem(String donem) {
        this.donem = donem;
    }

    public int getNot() {
        return not;
    }

    public void setNot(int not) {
        this.not = not;
    }
    
}
