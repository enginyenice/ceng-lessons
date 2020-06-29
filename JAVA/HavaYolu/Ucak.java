import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class Ucak {
	/*
	 id 				=> Ucus Kodu									#1
	 guzergah			=> Hangi guzergah uzerinde oldugunu tutuyor.	#izmir - Adana
	 koltuk				=> Koltuklarin durumunu tutuyor					#-1 Bos - 0 Dolu
	 yolcuKoltukBilgisi	=> Dolu koltuklarin Yolcu bilgilerini tutar		#TC-Ad-Soyad
	 */
	private int id;
	private String guzergah;
	private int[] koltuk = new int[20];
	private Yolcu[] yolcuKoltukBilgisi = new Yolcu[20];
	
	public Ucak(int id,String guzergah) { /* iki parametreli constructor */
		this.id = id;				// Gelen id, Global degisken olan id aktariliyor.
		this.guzergah = guzergah;	// Gelen guzergah, Global degisken olan guzergah aktariliyor.
		for(int i = 0; i<20;i++)	// Ucagin koltuklarinin tamamina bos koltuk degeri (-1) aktariliyor.
		{
			this.koltuk[i] = -1;
		}
	}
	public Ucak() { /* Constructor */

	}
	public int getid() { /* global id degeri return edilir. */
		return id;
	}
	public void setid(int id) { /* global id degerine gelen id degeri aktarilir.*/
		this.id = id;
	}
	public String getGuzergah() { /* global guzergah degeri return edilir. */
		return guzergah;
	}
	public void setGuzergah(String guzergah) { /* global guzergah degerine gelen guzergah degeri aktarilir.*/
		this.guzergah = guzergah;
	}
	public int[] getKoltuk() { /* global koltuk degeri return edilir. */
		return koltuk;
	}
	public void setKoltuk(int[] koltuk) { /* global koltuk degerine gelen koltuk degeri aktarilir.*/
		this.koltuk = koltuk;
	}
	public String yolToString() { /* Ucus Kodu ve Guzergah degerlerinin bulundugu string bir deger olusturulur ve return edilir. */
		
		String yol = this.id + " - " + this.guzergah; 
		return yol;
	}
	public String bosKoltuk() { /* Bos olan koltularin bulundugu bir string bir deger olusturulur ve return edilir.  */
		String bosKoltukListesi = "";
		for(int i = 0; i<this.koltuk.length;i++)
		{
			if(this.koltuk[i] == -1) //Koltuk bos ise
			{
				bosKoltukListesi += "["+ (i+1) + "] "; //String bir goruntu olusturur ornegin [1] [2] .... seklinde 
			}
		}
		return bosKoltukListesi;
	}
	public Yolcu[] getYolcuKoltukBilgisi() { /* global yolcuKoltukBilgisi degeri return edilir. */
		return yolcuKoltukBilgisi;
	}
	public void setYolcuKoltukBilgisi(Yolcu[] yolcuKoltukBilgisi) { /* global yolcuKoltukBilgisi degerine gelen yolcuKoltukBilgisi degeri aktarilir.*/
		this.yolcuKoltukBilgisi = yolcuKoltukBilgisi;
	}
	public boolean koltukKontrol(int koltukNo) /* Parametre olarak gelen koltuk numarasinin bos olup olmadigi kontrol edilir. */
	{
		if(koltukNo <= 20 && koltukNo > 0) /*Parametre olarak gelen deger 1 ile 20 arasinda mi ?  */
		{
			if(this.koltuk[koltukNo -1] == -1) //(koltukNo - 1) => Koltuk indexi bos mu
			{
				return true; // Koltuk bos
			}
		}
		return false; // Koltuk dolu
	}
	public void BiletOlustur(int koltukNo,Yolcu yolcuData) { /*Parametre olarak gelen degerler ile koltuk olusturulur. */
		this.koltuk[koltukNo -1] = 0; // Koltuk indisi doluya cevrilir.
		this.yolcuKoltukBilgisi[koltukNo -1] = yolcuData; //Koltuk indisine yolcu bilgisi gonderilir.
	}
	public boolean koltukSil(int koltukNo) { /* Parametre olarak gelen koltuk silinir. */
		if(this.koltuk[koltukNo -1 ] == 0) // Koltuk indisi dolu mu ? 
		{
			this.koltuk[koltukNo -1] = -1; // Koltugu bosa cevir.
			this.yolcuKoltukBilgisi[koltukNo -1] = null; // Koltugun kullanici bilgisini bosalt.
			return true; // Koltuk silindi.
		}
		
		
		return false; // Koltuk silinemedi. Koltuk zaten bos.
	}
	public void GunSonuListesi() { /* Gun sonu listesi olusturulur. */
		
		for(int i = 0; i<this.koltuk.length;i++) // Tum koltuklara bak.
		{
			if(this.koltuk[i] == 0) { // Dolu olan koltuk.
				String text ="Ucus Kodu: "+ id +" Koltuk Numarasi: "+ (i+1) +" Yolcu Adi: "+ this.yolcuKoltukBilgisi[i].getAdi()+" Yolcu Soyadi: "+ this.yolcuKoltukBilgisi[i].getSoyadi()+" Yolcu TCKimlik: "+this.yolcuKoltukBilgisi[i].getTCKimlik();				
				// Koltuk bilgilerini olustur.
				System.out.println(text);
				// Ekrana yaz.
			}
		}

	}
	public int bosKoltukSayisi() { /* Bos koltuk sayisi bulur. */
		int sayac = 0; // Bos koltuk sayisi 0
		for(int i = 0; i< this.koltuk.length;i++) // Tum koltuklara bak
		{
			if(this.koltuk[i] == -1) // Koltuk bos ise
			{
				sayac++; // sayaci bir arttir.
			}
		}
		return sayac; // Toplam bosluk sayisini geri gonder.
	}
	public void CiktiOlustur() { /* .txt cikti olustur. */
	
		for(int i = 0; i<this.koltuk.length;i++) // Tum koltuklari gez.
		{
			if(this.koltuk[i] == 0) { // Koltuk dolu ise
				String text ="Ucus Kodu: "+ id +" Koltuk Numarasi: "+ (i+1) +" Yolcu Adi: "+ this.yolcuKoltukBilgisi[i].getAdi()+" Yolcu Soyadi: "+ this.yolcuKoltukBilgisi[i].getSoyadi()+" Yolcu TCKimlik: "+this.yolcuKoltukBilgisi[i].getTCKimlik();
				//Koltuk bilgilerini hazirla
				File file = new File("gunSonu.txt");
				//gunSonu.txt olarak bir dosya tipi tanimla.
				try(BufferedWriter br = new BufferedWriter(new FileWriter(file,true))){ //.txt metninin sonuda ekleyecek sekilde bufferedWritter olustur.
				br.write(text+"\n"); //Veriyi dosyaya yaz.
				} catch (IOException e) {
				    System.out.println("Dosyaya Ulasilamiyor..." +file.toString()); // Uyari..
				}
			}
		}
		

	}
}
