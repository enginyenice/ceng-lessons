
#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

struct ogrenci {
	int ogrNo;
	string ogrAdi;
	string ogrSoyadi;
	int ogrEgitimKodu;
	struct ogrenci* sol;
	struct ogrenci* sag;
};

class Islemler
{
public:
	int egitimKodu[4];
#pragma region Ekle-Sil-Duzenle-TumunuSil
	ogrenci* root;
	struct ogrenci* ekle(struct ogrenci* r, int ogrNo, string ogrAdi, string ogrSoyadi, int ogrEgitimKodu) {

		if (r == NULL)
		{
			ogrenci* temp = new ogrenci;
			temp->ogrNo = ogrNo;
			temp->ogrAdi = ogrAdi;
			temp->ogrSoyadi = ogrSoyadi;
			temp->ogrEgitimKodu = ogrEgitimKodu;
			egitimKodu[ogrEgitimKodu - 1] = egitimKodu[ogrEgitimKodu - 1] + 1;
			temp->sag = NULL;
			temp->sol = NULL;
			return temp;
		}
		else {
			if (r->ogrNo < ogrNo)
			{
					r->sag = ekle(r->sag, ogrNo, ogrAdi, ogrSoyadi, ogrEgitimKodu);
			}
			else {
				r->sol = ekle(r->sol, ogrNo, ogrAdi, ogrSoyadi, ogrEgitimKodu);
			}
			return r;

		}


	}
	struct ogrenci* tumunuSil(struct ogrenci* r) {
		egitimKodu[0] = 0;
		egitimKodu[1] = 0;
		egitimKodu[2] = 0;
		egitimKodu[3] = 0;
		free(r);
		r = NULL;
		return r;
	}
	struct ogrenci* ogr;
	void ogrBul(ogrenci* node,int ogrNo)
	{
		if (node == NULL)
		{
			return;
		}
		ogrBul(node->sol, ogrNo);
		if (node->ogrNo == ogrNo)
		{
			ogr = node;
		}
		ogrBul(node->sag, ogrNo);
	}
	void soldanSagaDolas(ogrenci* node)
	{
		if (node == NULL)
		{
			return;
		}
		soldanSagaDolas(node->sol);
		cout << node->ogrNo << " " << node->ogrAdi << "  " << node->ogrSoyadi << "  " << node->ogrEgitimKodu << "  " << endl;
		soldanSagaDolas(node->sag);
	}
	int enKucukDegeriBul(ogrenci* node)
	{
		ogrenci* arayici = node;
		while (arayici->sol != NULL)
			arayici = arayici->sol;
		return arayici->ogrNo;
	}
	int enBuyukDegeriBul(ogrenci* node)
	{
		ogrenci* arayici = node;
		while (arayici->sag != NULL)
			arayici = arayici->sag;
		return arayici->ogrNo;
	}
	ogrenci* sil(ogrenci* node, int silinecekDeger)
	{
		if (node == NULL)
		{
			return NULL;
		}
		if (silinecekDeger == node->ogrNo)
		{
			egitimKodu[node->ogrEgitimKodu - 1] = egitimKodu[node->ogrEgitimKodu - 1] - 1;
			if (node->sol == NULL && node->sag == NULL)
			{
				return NULL;
			}
			if (node->sag != NULL)
			{
				node->ogrNo = enKucukDegeriBul(node->sag);
				node->sag = sil(node->sag, enKucukDegeriBul(node->sag));
				
				return node;
			}
			if (node->sol != NULL)
			{
				node->ogrNo = enBuyukDegeriBul(node->sol);
				node->sol = sil(node->sol, enBuyukDegeriBul(node->sol));
				return node;
			}
		}
		if (silinecekDeger < node->ogrNo)
		{
			node->sol = sil(node->sol, silinecekDeger);
			return node;
		}
		node->sag = sil(node->sag, silinecekDeger);
		return node;
	}
	int ogrNoVarmiKont = 0;
	int ogrNoVarMi(struct ogrenci* node,int ogrNo) {
		if (node == NULL)
		{
			return 0;
		}
		ogrNoVarMi(node->sol,ogrNo);
		if (ogrNo == node->ogrNo)
		{
			ogrNoVarmiKont = 1;
		}
		ogrNoVarMi(node->sag, ogrNo);





	}
	int hesaplar = 0;
	void kayitHesapla(ogrenci* node)
	{
		if (node == NULL)
		{
			return;
		}
		kayitHesapla(node->sol);
		hesaplar++;
		kayitHesapla(node->sag);
	}
	void seminerKodluAramaYap(ogrenci* node,int kod)
	{
		
		if (node == NULL)
		{
			return;
		}
		seminerKodluAramaYap(node->sol,kod);
		if (node->ogrEgitimKodu == kod)
		{
			cout << node->ogrNo << " " << node->ogrAdi << "  " << node->ogrSoyadi << "  " << node->ogrEgitimKodu << "  " << endl;
		}
		seminerKodluAramaYap(node->sag,kod);
	}



#pragma endregion	
	Islemler() {
		root = NULL;
		root = ekle(root, 30, "Deniz", "Ozongul",1);
		root = ekle(root, 20, "Emirhan", "Taner", 2);
		root = ekle(root, 25, "Betul", "Dikmen", 4);
		root = ekle(root, 42, "Ecem", "Cetin", 1);
		root = ekle(root, 32, "Mert", "Acunman", 4);
		root = ekle(root, 47, "Gunce", "Er", 3);
		root = ekle(root, 10, "Fatih", "Balci", 3);
		root = ekle(root, 23, "Ahsen", "Konak", 2);
		root = ekle(root, 17, "Ece", "Surucu", 1);
		root = ekle(root, 40, "Yaren", "Sari", 3);

	}
	void ogrIslem() {

		while (true)
		{
			cout << "1-) Tum Liste" << endl;
			cout << "2-) Egitim Bazli Liste" << endl;
			cout << "6-) Geri" << endl;
			cout << "?: ";
			int status = 0;
			cin >> status;


			switch (status)
			{
			case 1:
				ogrList();
				break;
			case 2:
				seminerKodluArama();
				break;
			case 6:
				return;
				break;
			}
		}

	
	}
	void ogrEkle() {
		system("cls");
		int ogrNo, ogrEgitimKodu;
		string ogrAdi, ogrSoyadi;
		cout << "Ogrenci No: ";
		cin >> ogrNo;
		ogrNoVarMi(root, ogrNo);
		while (ogrNoVarmiKont == 1) {
			ogrNoVarmiKont = 0;
			cout << "Boyle bir ogrenci numarasi mevcut. Yeni numara giriniz.." << endl;
			cout << "Ogrenci No: ";
			cin >> ogrNo;
			ogrNoVarMi(root, ogrNo);
		}



		cout << "Ogrenci Adi: ";
		cin >> ogrAdi;
		cout << "Ogrenci Soyadi: ";
		cin >> ogrSoyadi;
		cout << "Ogrenci Egitim Kodu: ";
		cin >> ogrEgitimKodu;
		int hakkiVarMi = ogrEgitimKoduKontrol(ogrEgitimKodu);
		while (ogrEgitimKodu > 4 || ogrEgitimKodu < 1 || hakkiVarMi == 0)
		{
			if (hakkiVarMi != 1 || ogrEgitimKodu > 4 || ogrEgitimKodu < 1)
			{
				cout << "Gecerli bir kurs numarasi giriniz..:" << endl;
			}
			if (hakkiVarMi == 0)
			{
				cout << "Uzgunuz bu kurs doludur"<< endl;
			}
			cin >> ogrEgitimKodu;
			hakkiVarMi = ogrEgitimKoduKontrol(ogrEgitimKodu);
		}
		
		root = ekle(root, ogrNo, ogrAdi, ogrSoyadi, ogrEgitimKodu);
		system("pause");
	}
	int ogrEgitimKoduKontrol(int ogrEgitimKodu) {
		if (egitimKodu[ogrEgitimKodu - 1] < 4)
		{
			egitimKodu[ogrEgitimKodu - 1] = egitimKodu[ogrEgitimKodu - 1] + 1;
			return 1;
		}
		
		return 0;

	}	
	void ogrDuzenle() {
		system("cls");
		int ogrNo, ogrEgitimKodu;
		string ogrAdi, ogrSoyadi;
		cout << "Duzenlenmesini Istediginiz :";
		cout << "Ogrenci No: ";
		cin >> ogrNo;
		cout << "Ogrenci Adi: ";
		cin >> ogrAdi;
		cout << "Ogrenci Soyadi: ";
		cin >> ogrSoyadi;
		cout << "Ogrenci Egitim Kodu: ";
		cin >> ogrEgitimKodu;
		root = sil(root, ogrNo);
		root = ekle(root, ogrNo, ogrAdi, ogrSoyadi, ogrEgitimKodu);
		system("pause");
	}	
	void ogrSil() {
		system("cls");
		int ogrNo;
		cout << "Ogrenci No: ";
		cin >> ogrNo;
		// silme iþlemleri
		root = sil(root, ogrNo);
		soldanSagaDolas(root);
		cout << endl;
		system("pause");
	}
	void ogrTumSil() {
		system("cls");
		cout << "Tum liste silindi";
		root = tumunuSil(root);
		system("pause");
	}
	void ogrList() {
		system("cls");
		soldanSagaDolas(root);
		system("pause");
	}
	void seminerIslem() {
		while (true)
		{
			cout << "1-) Yeni Kullanici Ekle" << endl;
			cout << "2-) Kullanici Sil" << endl;
			cout << "3-) Tum Listeyi Sil" << endl;
			cout << "4-) Kullanici Duzenle" << endl;
			cout << "5-) Cekilis Yap" << endl;
			cout << "6-) Tum Liste" << endl;
			cout << "7-) Egitim Bazli Liste" << endl;
			cout << "8-) Seminerde Kac Kisi Var" << endl;
			cout << "9-) Cikis" << endl;
			cout << "?: ";
			int status = 0;
			cin >> status;


			switch (status)
			{
			case 1:
				ogrEkle();
				break;
			case 2:
				ogrSil();
				break;
			case 3:
				ogrTumSil();
				break;
			case 4:
				ogrDuzenle();
			case 5:
				cekilis();
				break;
			case 6:
				ogrList();
				break;
			case 7:
				seminerKodluArama();
				break;
			case 8:
				seminerKayitliSayisi();
				break;
			case 9:
				return;
				break;
			}
			status = 0;
		}
	}
	void cekilis() {
		system("cls");
		int EnKucuk = enKucukDegeriBul(root);
		int EnBuyuk = enBuyukDegeriBul(root);
		cout << "Cekilisi kazanan en kucuk numara: " << EnKucuk << endl;
		cout << "Cekilisi kazanan en buyuk numara: " << EnBuyuk << endl;
		system("pause");
	}
	void seminerKayitliSayisi() {
		system("cls");
		hesaplar = 0;
		kayitHesapla(root);
		cout << hesaplar << " Kisi kayitlidir";
		system("pause");
	}
	void seminerKodluArama() {
		system("cls");
		int kod = 1;
		cout << "Seminer Kodlu Arama: E";
		cin >> kod;
		while (kod < 1 || kod > 4)
		{
			cout << "Hatali kod lutfen 1-4 arasinda seminer kodunu giriniz...";
			cout << "Seminer Kodlu Arama: E";
			cin >> kod;
		}
		seminerKodluAramaYap(root, kod);
		system("pause");
	}




};

