package nyp11Duyuru;

public class Ders {
   private String ad;
   private String donem;
   private int not;
   
   public Ders(String ad,String donem,int not){
       this.ad=ad;
       this.donem=donem;
       this.not=not;
   }
   
   public void setAd(String ad){
       this.ad=ad;
   }
   public String getAd(){
       return this.ad;
   }
   public void setDonem(String donem){
       this.donem=donem;
   }
   public String getDonem(){
       return this.donem;
   }
   
   public void setNot(int not){
       this.not=not;
   }
   public int getNot(){
       return this.not;
   }
   
   
   
}
