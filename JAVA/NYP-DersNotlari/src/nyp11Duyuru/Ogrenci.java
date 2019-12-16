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
public class Ogrenci{
    //z.	 Bu	 sınıfın	 ad,	 soyAd	 ve	 ogrenciNo
    private String ad;
    private String soyAd;
    private int ogrenciNo;
    private Ders ders[]=new Ders[6];

    public Ogrenci(String ad, String soyAd, int ogrenciNo) {
        this.ad = ad;
        this.soyAd = soyAd;
        this.ogrenciNo = ogrenciNo;
    }

    public String getAd() {
        return ad;
    }

    public void setAd(String ad) {
        this.ad = ad;
    }

    public String getSoyAd() {
        return soyAd;
    }

    public void setSoyAd(String soyAd) {
        this.soyAd = soyAd;
    }

    public int getOgrenciNo() {
        return ogrenciNo;
    }

    public void setOgrenciNo(int ogrenciNo) {
        this.ogrenciNo = ogrenciNo;
    }

    public Ders[] getDers() {
        return ders;
    }

    public void setDers(Ders[] ders) {
        this.ders = ders;
    }

    public Ogrenci() {
    }

    
    
}
