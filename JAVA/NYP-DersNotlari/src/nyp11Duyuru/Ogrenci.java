package nyp11Duyuru;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Ogrenci {
    private String ad;
    private String soyAd;
    private String ogrenciNo;
    private Ders array[]= new Ders[6]; 
    private static int a=0;
    
    
    public Ogrenci(String ad,String soyAd,String ogrenciNo){
       this.ad=ad;
       this.soyAd=soyAd;
       this.ogrenciNo=ogrenciNo;
    }
   
   public void setAd(String ad){
       this.ad=ad;
   }
   public String getAd(){
       return this.ad;
   }
   public void setSoyAd(String soyAd){
       this.soyAd=soyAd;
   }
   public String getSoyAd(){
       return this.soyAd;
   }
   public void setOgrenciNo(String ogrenciNo){
       this.ogrenciNo=ogrenciNo;
   }
   public String getOgrenciNo(){
       return this.ogrenciNo;
   }
   
   
   
   
   public void ogrenciNoDegistir(String ogrenciNo) throws FileNotFoundException, IOException{
       File dosya = new File("ogrenci.txt");
       String eski = "";
       BufferedReader gecici = new BufferedReader(new FileReader(dosya));
       String satir = gecici.readLine();
       while (satir != null){
            eski = eski + satir + System.lineSeparator();
            satir = gecici.readLine();
       }
       String yeni = eski.replaceAll(this.ogrenciNo,ogrenciNo);
       FileWriter yazdir = new FileWriter(dosya);
       yazdir.write(yeni);
       gecici.close();
       yazdir.close();
       this.ogrenciNo=ogrenciNo;

       
   }
   public String ogrenciNo(){
       return this.ogrenciNo;
   }
   public int ortalamaNot(){
       int toplam = 0;    
       for(int i=0;i<array.length;i++){
           toplam+=array[i].getNot();
       }            
       return toplam/array.length;
   }
   public void dersListele(){
       for(int i=0;i<array.length;i++){
           System.out.println((i+1)+".Ders "+array[i].getAd());
       }
   }
   public void setDers(Ders icerik){
       this.array[a]=icerik;
       a++;
   }   
   public Ders getDers(int i){
       return array[i];
   }
   
}
