
public class Yolcu {
	/*
		TCKimlik	=> Yolcunun TCKimlik numarasi 	#10000000000
		Adi			=> Yolcunun Adi					#Ali Osman
		Soyadi		=> Yolcunun Soyadi				#SELVi
	 */
	private int TCKimlik;
	private String Adi;
	private String Soyadi;
	
	public Yolcu(int TCKimlik,String Adi,String Soyadi) { /* 3 Parametreli constructor */
		this.Adi = Adi; // Gelen adi global adi degiskenine aktar.
		this.Soyadi = Soyadi; // Gelen Soyadi global Soyadi degiskenine aktar.
		this.TCKimlik = TCKimlik; // Gelen TCKimlik global TCKimlik degiskenine aktar.
	}
	public String getAdi() { /* Adi degiskenini return et. */
		return Adi;
	}
	public void setAdi(String adi) { /* Gelen adi degiskenini global adi degiskenine aktar. */
		Adi = adi;
	}
	public int getTCKimlik() { /* TCKimlik degiskenini return et. */
		return TCKimlik;
	}
	public void setTCKimlik(int tCKimlik) { /* Gelen tCKimlik degiskenini global tCKimlik degiskenine aktar. */
		TCKimlik = tCKimlik;
	}
	public String getSoyadi() { /* Soyadi degiskenini return et. */
		return Soyadi;
	}
	public void setSoyadi(String soyadi) { /* Gelen soyadi degiskenini global soyadi degiskenine aktar. */
		Soyadi = soyadi;
	}
	

}
