import java.io.File;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Ucak ucak1 = new Ucak(1,"izmir - Adana");
		Ucak ucak2 = new Ucak(2,"izmir – Kayseri");
		Ucak ucak3 = new Ucak(3,"izmir – Antalya");
		Ucak ucak4 = new Ucak(4,"izmir – Erzurum");
		Ucak ucak5 = new Ucak(5,"izmir – Trabzon");
		/* Ucak listesini olustur. */
		try (Scanner scanner = new Scanner(System.in)) { // scanner adinda bir Scanner olustur.
			while(true) { // Surekli donen while.
				
				int menuid; // Menu seciminin tutulacagi degisken.
				System.out.println("1-)Yolcu Kaydi");
				System.out.println("2-)Bilet iptali");
				System.out.println("3-)Ucus Listesi");
				System.out.print("Secim Yapiniz: ");
				menuid = scanner.nextInt(); // Kullanicidan deger al.
				
				if(menuid == 1) // Alinan deger 1 ise
				{
					Ucak secilenUcak = new Ucak();
					System.out.println("--Ucak Listesi--");
					System.out.println(ucak1.yolToString());
					System.out.println(ucak2.yolToString());
					System.out.println(ucak3.yolToString());
					System.out.println(ucak4.yolToString());
					System.out.println(ucak5.yolToString());
					/* Ucaklarin genel bilgilerini listele */
					
					System.out.println("Guzargah Secimi Yapiniz: ");
					int Ucakid;
					Ucakid = scanner.nextInt();
					/* Kullanicidan guzargah secimi al. */	
						if(Ucakid <1 || Ucakid > 5) // Ucakid 1 ile 5 arasinda degilse.
						{
							System.out.println("Bu ucus kodu hatalidir. Ana menuye yonlendiriliyorsunuz...");
							// Hata mesaji ver ve menuye geri yonlendir.
						} else { // Ucakid 1 ile 5 arasinda ise.
							
							switch (Ucakid) { // Gelen Ucakid ye  gore secilenUcak degiskenine uygun ucak degikenini aktar.
							case 1:
								secilenUcak = ucak1;
								break;
							case 2:
								secilenUcak = ucak2;
								break;
							case 3:
								secilenUcak = ucak3;
								break;
							case 4:
								secilenUcak = ucak4;
								break;
							case 5:
								secilenUcak = ucak5;
								break;
							default:
								break;
							}

						System.out.println("Bos Koltuklar");
						System.out.println(secilenUcak.bosKoltuk()); // Bos koltuklari listele
						System.out.println("Koltuk Secimi Yapiniz: ");
						int koltuk = scanner.nextInt(); //Kullanicidan koltuk degerini al
						boolean koltukDurum =  secilenUcak.koltukKontrol(koltuk); //Koltuk dolu mu bos mu ?
						if(koltukDurum == true) // Koltuk bos ise
						{
							int TCKimlik;
							String Adi,Soyadi;
							System.out.println("TC Kimlik: ");
							TCKimlik = scanner.nextInt();
							System.out.println("Adiniz: ");
							Adi = scanner.next();
							System.out.println("Soyadiniz: ");
							Soyadi = scanner.next();
							// Yolcu bilgilerini kullanicidan al.
							Yolcu yolcu = new Yolcu(TCKimlik, Adi, Soyadi);
							// Yolcu degiskenine degerleri aktar.
							secilenUcak.BiletOlustur(koltuk, yolcu);
							// BiletOlustur degiskenine gerekli verileri gonder.
							
							
						} else {
							System.out.println("Bu koltuk dolu. Ana menuye yonlendiriliyorsunuz...");
							// Koltuk Dolu.
						}
						DosyaSil(); 			// gunSonu.txt dosyasini sil.
						ucak1.CiktiOlustur(); 	// guncel ucak ciktisini txt ye yaz.
						ucak2.CiktiOlustur(); 	// guncel ucak ciktisini txt ye yaz.
						ucak3.CiktiOlustur(); 	// guncel ucak ciktisini txt ye yaz.
						ucak4.CiktiOlustur(); 	// guncel ucak ciktisini txt ye yaz.
						ucak5.CiktiOlustur(); 	// guncel ucak ciktisini txt ye yaz.
						}
				} else if(menuid == 2) /* Menu secimi 2 ise */
				{
					System.out.println("Bilet iptal");
					Ucak secilenUcak = new Ucak();
					System.out.println("--Ucak Listesi--");
					System.out.println(ucak1.yolToString());
					System.out.println(ucak2.yolToString());
					System.out.println(ucak3.yolToString());
					System.out.println(ucak4.yolToString());
					System.out.println(ucak5.yolToString());
					/* Ucaklarin genel bilgilerini listele */
					
					System.out.println("Guzargah Secimi Yapiniz: ");
						int Ucakid;
						Ucakid = scanner.nextInt();
						
						if(Ucakid <1 || Ucakid > 5) // Ucakid 1 ile 5 arasinda degilse.
						{
							System.out.println("Bu ucus kodu hatalidir. Ana menuye yonlendiriliyorsunuz...");
							// Hata mesaji ver ve menuye geri yonlendir.
						} else { // Ucakid 1 ile 5 arasinda ise.
							
							switch (Ucakid) { // Gelen Ucakid ye  gore secilenUcak degiskenine uygun ucak degikenini aktar.
							case 1:
								secilenUcak = ucak1;
								break;
						case 2:
							secilenUcak = ucak2;
							break;
						case 3:
							secilenUcak = ucak3;
							break;
						case 4:
							secilenUcak = ucak4;
							break;
						case 5:
							secilenUcak = ucak5;
							break;
						default:
							break;
						}
						System.out.println("iptal Etmek istediginiz Koltuk Numarasi: ");
						int koltukNo = scanner.nextInt(); //iptal etmek istenilen koltuk numarasini kullanicidan al.
						if(koltukNo < 1 || koltukNo > 20)
						{
							System.out.println("Bu koltuk numarasi hatalidir. Ana menuye yonlendiriliyorsunuz...");
							
						} else {
							boolean result = secilenUcak.koltukSil(koltukNo); // Koltuk silme islemi
							if(result == true) // Silme islemi gerceklestiyse.
							{
								System.out.println("Koltuk silindi.");
							} else { //Gerceklesemediyse.
								System.out.println("Girilen koltuk zaten bos.");
							}
							DosyaSil(); 			// gunSonu.txt dosyasini sil.
							ucak1.CiktiOlustur(); 	// guncel ucak ciktisini txt ye yaz.
							ucak2.CiktiOlustur(); 	// guncel ucak ciktisini txt ye yaz.
							ucak3.CiktiOlustur(); 	// guncel ucak ciktisini txt ye yaz.
							ucak4.CiktiOlustur(); 	// guncel ucak ciktisini txt ye yaz.
							ucak5.CiktiOlustur(); 	// guncel ucak ciktisini txt ye yaz.
						}
						}	
					
				} else if(menuid == 3)
				{
					System.out.println("Gun Sonu Bilgisi");
					Ucak secilenUcak = new Ucak();
					System.out.println("--Ucak Listesi--");
					System.out.println(ucak1.yolToString());
					System.out.println(ucak2.yolToString());
					System.out.println(ucak3.yolToString());
					System.out.println(ucak4.yolToString());
					System.out.println(ucak5.yolToString());
					System.out.println("6- Tum Liste");
					
					System.out.println("Guzargah Secimi Yapiniz: ");
						int Ucakid;
						Ucakid = scanner.nextInt();
						switch (Ucakid) {
						case 1:
							secilenUcak = ucak1;
							break;
						case 2:
							secilenUcak = ucak2;
							break;
						case 3:
							secilenUcak = ucak3;
							break;
						case 4:
							secilenUcak = ucak4;
							break;
						case 5:
							secilenUcak = ucak5;
							break;
						default:
							break;
						}
						
						if(Ucakid < 6 && Ucakid > 0) {
							System.out.println("Secilen Ucak");
							System.out.println(secilenUcak.yolToString());
							secilenUcak.GunSonuListesi();
							System.out.print("Bos Koltuk: "+secilenUcak.bosKoltukSayisi()+" ");
							System.out.println("Dolu Koltuk: "+(20-secilenUcak.bosKoltukSayisi())+" ");
							/* Secilen ucagin gerekli gun sonu bilgilerini getir. */
							
						} else if(Ucakid == 6)
						{
							System.out.println("------------------------------");
							System.out.println(ucak1.yolToString());
							ucak1.GunSonuListesi();
							System.out.print("Bos Koltuk: "+ucak1.bosKoltukSayisi()+" ");
							System.out.println("Dolu Koltuk: "+(20-ucak1.bosKoltukSayisi())+" ");
							/* ucak1 ucagin gerekli gun sonu bilgilerini getir. */
							System.out.println("------------------------------");
							System.out.println(ucak2.yolToString());
							ucak2.GunSonuListesi();
							System.out.print("Bos Koltuk: "+ucak2.bosKoltukSayisi()+" ");
							System.out.println("Dolu Koltuk: "+(20-ucak2.bosKoltukSayisi())+" ");
							/* ucak2 ucagin gerekli gun sonu bilgilerini getir. */
							System.out.println("------------------------------");
							System.out.println(ucak3.yolToString());
							ucak3.GunSonuListesi();
							System.out.print("Bos Koltuk: "+ucak3.bosKoltukSayisi()+" ");
							System.out.println("Dolu Koltuk: "+(20-ucak3.bosKoltukSayisi())+" ");
							/* ucak3 ucagin gerekli gun sonu bilgilerini getir. */
							System.out.println("------------------------------");
							System.out.println(ucak4.yolToString());
							ucak4.GunSonuListesi();
							System.out.print("Bos Koltuk: "+ucak4.bosKoltukSayisi()+" ");
							System.out.println("Dolu Koltuk: "+(20-ucak4.bosKoltukSayisi())+" ");
							/* ucak4 ucagin gerekli gun sonu bilgilerini getir. */
							System.out.println("------------------------------");
							System.out.println(ucak5.yolToString());
							ucak5.GunSonuListesi();
							System.out.print("Bos Koltuk: "+ucak5.bosKoltukSayisi()+" ");
							System.out.println("Dolu Koltuk: "+(20-ucak5.bosKoltukSayisi())+" ");
							/* ucak5 ucagin gerekli gun sonu bilgilerini getir. */
							System.out.println("------------------------------");
						}				
				} else {
					System.out.println("Hatali Secim"); // Hatali secim
				}
				
				
			}
		}		
	}	
	public static void DosyaSil(){
	    File f = new File("gunSonu.txt"); // yol belirtmeyip sadece dosya ismi belirttigimiz zaman otomatik olarak bulundugu klasore gore islem yapar.
	 
	    if(!f.exists()){ // eger dosya yoksa
	       // System.out.println("Dosya bulunamadigindan silinemedi");
	    }else{
	        f.delete(); // eger dosyamiz varsa.. // silme islemi gerceklestirir.
	        //System.out.println(f.getName() +" adli dosya basarili bir sekilde silinmistir.");
	    }
	}
}
