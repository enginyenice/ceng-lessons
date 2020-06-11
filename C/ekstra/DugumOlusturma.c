#include <stdio.h>
#include <stdlib.h>

struct dugum
{
    int veri; // dugumdeki verilerin temsili
    struct dugum *ileri; //bagli listede ki diger elemana ulasmak icin
};

struct dugum *root; // Ilk dugumu isaret etmek icin olusturulan dugum.
struct dugum *dugumEkle(struct dugum *r,int veri)
{
    if(root == NULL) // liste bos ise
    {
        struct dugum * temp; // temp adinda bir dugum olustur.
        temp = (struct dugum*)malloc(sizeof(struct dugum)); //olusturulan dugume hafizadan yer al.
        temp->veri = veri; // temp dugumunun veri degerine gelen veriyi gonder
        temp->ileri = NULL; // temp degerinin ileri degerini null yap.
        return temp; // liste bos oldugu icin olusturulan dugumu root degerine esitle
    }
    else // liste dolu ise
    {
        struct dugum *iter; // bir tane gezici olustur.
        iter = root; // geziciyi root degerine esitle
        while(iter->ileri != NULL) // son dugume ulasincayadek geziciyi ilerlet
        {
            iter = iter->ileri;
        }
        struct dugum * temp;  // temp adinda bir dugum olustur.
        temp = (struct dugum*)malloc(sizeof(struct dugum)); //olusturulan dugume hafizadan yer al.
        temp->veri = veri; // temp dugumunun veri degerine gelen veriyi gonder
        temp->ileri = NULL; // temp degerinin ileri degerini null yap.
        iter->ileri = temp; // isaretcinin son gosterdigi degerin ilerisine temp dugumunu ekle
        return r; // yeni olusan dugum listesini geri gonder.

    }
};

struct dugum *dugumSil(struct dugum *r,int veri)
{
    struct dugum *iter; //gezici olustur.
    iter = r; // gezicinin ilk isaret ettigi yeri root olarak goster
    if(iter->veri == veri) // ilk dugum silinecek deger ise
    {
    return iter->ileri; // listenin ikinci degerini birinci deger olarak goster.

    }
    else // diger dugumlerden birisi silinecek ise
    {
        while(iter != NULL) // geziciyi dugumlerin sonuna gidenedek dondur.
        {
            if(iter->ileri->veri == veri) // gezicinin veri degeri silinmesi istenen veri degerine esit ise
            {
                break; // donguyu kir ve cik.
            }
            iter = iter->ileri; // dugumu ilerlet
        }
        /*
        --------      --------      --------      --------
        |   1  |----->|   2  |----->|  3   |----->|  4   |----->
        --------      --------      --------      --------
                        [iter]
        3 degerini silmek istedigimizi varsayalim.
        gezici degerimiz 2 degerinde kalacaktir.
        gezici dugumunun ilerisine silecegimiz dugumun ilerisindeki dugumu bagliyoruz.

        --------      --------            --------
        |   1  |----->|   2  |----->----> |  4   |
        --------      --------            --------
                                --------
                                |  3   |
                                --------
        Bu sayede silmek istedigimiz dugumu listenin disarisinda birakmis oluyoruz.
        */

        iter->ileri = iter->ileri->ileri;
        return r; // olusan listesi geri dondurduk.
    }
};
void dugumListele(struct dugum *r)
{
    struct dugum *iter; // gezici olusturduk.
    iter = r; // gezicinin ilk degerine root degerini atadik.
    printf("\n");
    while(iter != NULL) // gezici null olanadek ileri gidecegi bir dongu olusturduk
    {
        printf("%d -",iter->veri); // gezicinin her gosterdigi degeri ekrana yazdik.
        iter = iter->ileri; // geziciyi bir ileri goturduk.

    }
    printf("\n");

}
int main()
{
    root = NULL; // ilk dugumu bos olarak gosterdik.
    int secim = 0; // secim degiskeni olusturduk.
    while(1) // sonsuza kadar donecek bir while dongusu ekledik.
    {
        printf("  1- Dugum ekle\n");
        printf("  2- Dugum sil\n");
        printf("  3- Dugumleri listele\n");
        printf("  4- Cikis\n");
        scanf("%d",&secim);
        if(secim == 1) // secim 1 ise
        {
            int veri = 0; // bir veri tipinde degisken olusturduk
            printf("Dugum Ekle: ");
            scanf("%d",&veri); // veri degiskenine deger atadik.
            root = dugumEkle(root,veri); // dugumu ve veri degiskenini dugumEkle fonksiyonuna gonderdik.
        }
        else if(secim == 2) // secim 2 ise
        {
            int veri = 0; // veri degiskeni olusturduk.
            printf("Dugum Sil: ");
            scanf("%d",&veri); // veri degiskenine deger atadik.
            root = dugumSil(root,veri);// dugumu ve veri degiskenini dugumSil fonksiyonuna gonderdik.
        }
        else if(secim == 3) // secim 3 ise
        {
            dugumListele(root); // dugumu dugumListele fonksiyonuna gonderdik.

        }
        else if(secim == 4) // secim 4 ise
        {
            return 0; // Programi bitirdik.
        }
    }

    return 0;
}
