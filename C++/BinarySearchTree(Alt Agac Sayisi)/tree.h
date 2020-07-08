#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

struct ogrenci {
    int ogrPuan;
    string ogrAdi;
    string ogrSoyadi;

    struct ogrenci* sol;
    struct ogrenci* sag;
};
class Islemler
{
public:
    int yon = 0; //Kok 0 Sol -1 Sağ 1
    int solAgaclar = 0;
    int sagAgaclar = 0;
    int eklenmeSirasi;

    ogrenci* root;
    struct ogrenci* ekle(struct ogrenci* r, int ogrPuan, string ogrAdi, string ogrSoyadi) {
        if (r == NULL)
        {
            if(yon == 1)
                sagAgaclar++;
            else if(yon == -1)
                solAgaclar++;
            ogrenci* temp = new ogrenci;
            temp->ogrPuan = ogrPuan;
            temp->ogrAdi = ogrAdi;
            temp->ogrSoyadi = ogrSoyadi;
            temp->sag = NULL;
            temp->sol = NULL;
            eklenmeSirasi++;
            cout << eklenmeSirasi <<". Ogrenci Eklendi: "<< temp->ogrPuan << " " << temp->ogrAdi << "  " << temp->ogrSoyadi <<endl;
            return temp;
        }
        else {
            if (r->ogrPuan <= ogrPuan)
            {
                    yon = 1;
                    r->sag = ekle(r->sag, ogrPuan, ogrAdi, ogrSoyadi);
            }
            else {
                yon = -1;
                r->sol = ekle(r->sol, ogrPuan, ogrAdi, ogrSoyadi);

            }
            return r;
        }
    }
    struct ogrenci* ogr;
    void soldanSagaDolas(ogrenci* node)
    {
        if (node == NULL)
        {
            return;
        }
        soldanSagaDolas(node->sol);
        cout << node->ogrPuan << " " << node->ogrAdi << "  " << node->ogrSoyadi <<endl;
        soldanSagaDolas(node->sag);
    }
    Islemler() {
        root = NULL;


    }
    void ogrList() {
        system("cls");
        cout<<"_____Inorder Cikti_____"<<endl;
        soldanSagaDolas(root);
    }
    void YonlerList(){
        cout<<"-----------------------------------------"<< endl;
        cout<<"Sol yondeki alt agaç sayisi = "<<solAgaclar<< endl;
        cout<<"Sag yondeki alt agac sayisi  = "<<sagAgaclar<< endl;
        cout<<"-----------------------------------------"<< endl;
    }

};
