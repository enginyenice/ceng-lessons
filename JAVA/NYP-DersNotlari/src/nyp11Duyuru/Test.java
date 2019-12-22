package nyp11Duyuru;
import java.util.Scanner;
import java.io.*;
public class Test {  
    
    public static void main(String[] args) throws IOException {
 
    File dosya = new File("ogrenci.txt");
        try (Scanner icerik = new Scanner(dosya)) {
            String a[] = icerik.nextLine().split(",");
            Ogrenci o1= new Ogrenci(a[0],a[1],a[2]);
            String b[] = icerik.nextLine().split(",");
            Ders ders1 = new Ders(b[0],b[1],Integer.parseInt(b[2]));
            Ders ders2 = new Ders(b[3],b[4],Integer.parseInt(b[5]));
            Ders ders3 = new Ders(b[6],b[7],Integer.parseInt(b[8]));
            Ders ders4 = new Ders(b[9],b[10],Integer.parseInt(b[11]));
            Ders ders5 = new Ders(b[12],b[13],Integer.parseInt(b[14]));
            Ders ders6 = new Ders(b[15],b[16],Integer.parseInt(b[17]));
            o1.setDers(ders1);
            o1.setDers(ders2);
            o1.setDers(ders3);
            o1.setDers(ders4);
            o1.setDers(ders5);
            o1.setDers(ders6);
            
            System.out.println("Öğrenci No:"+o1.ogrenciNo()+"\n");
            System.out.println("Not Ortalaması: "+o1.ortalamaNot()+"\n");
            o1.dersListele();
            o1.ogrenciNoDegistir("190201133");
        }

        
    
  
    
    }
    
}
