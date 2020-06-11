#include <stdio.h>
#include <stdlib.h>

struct dugum
{
    int veri;
    struct dugum *ileri;
};

struct dugum *root;
struct dugum *dugumEkle(struct dugum *r,int veri)
{
    if(root == NULL)
    {
        struct dugum * temp;
        temp = (struct dugum*)malloc(sizeof(struct dugum));
        temp->veri = veri;
        temp->ileri = NULL;
        return temp;
    }
    else
    {
        struct dugum *iter;
        iter = root;
        while(iter->ileri != NULL)
        {
            iter = iter->ileri;
        }
        struct dugum * temp;
        temp = (struct dugum*)malloc(sizeof(struct dugum));
        temp->veri = veri;
        temp->ileri = NULL;
        iter->ileri = temp;
        return r;

    }
};

struct dugum *dugumSil(struct dugum *r,int veri)
{
    struct dugum *iter;
    iter = r;
    if(iter->veri == veri)
    {
    return iter->ileri;

    }
    else
    {
        while(iter != NULL)
        {
            if(iter->ileri->veri == veri)
            {
                break;
            }
            iter = iter->ileri;
        }
        iter->ileri = iter->ileri->ileri;
        return r;
    }
};
void dugumListele(struct dugum *r)
{
    struct dugum *iter;
    iter = r;
    printf("\n");
    while(iter != NULL)
    {
        printf("%d -",iter->veri);
        iter = iter->ileri;

    }
    printf("\n");

}
int main()
{
    root = NULL;
    int secim = 0;
    while(1)
    {
        printf("  1- Dugum ekle\n");
        printf("  2- Dugum sil\n");
        printf("  3- Dugumleri listele\n");
        printf("  4- Cikis\n");
        scanf("%d",&secim);
        if(secim == 1)
        {
            int veri = 0;
            printf("Dugum Ekle: ");
            scanf("%d",&veri);
            root = dugumEkle(root,veri);
        }
        else if(secim == 2)
        {
            int veri = 0;
            printf("Dugum Sil: ");
            scanf("%d",&veri);
            root = dugumSil(root,veri);
        }
        else if(secim == 3)
        {
            dugumListele(root);

        }
        else if(secim == 4)
        {
            return 0;
        }
    }

    return 0;
}
