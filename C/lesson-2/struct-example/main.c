#include <stdio.h>
#include <string.h>
struct Books{
    int id;
    int basimYili;
    char kitapAdi[100];
}book;
void main()
{
    book.id = 1;
    book.basimYili = 2019;
    strcpy(book.kitapAdi,"c ogreniyorum");
    printf("ID %d ,Yil %d , kitap adı %s\n",book.id,book.basimYili,book.kitapAdi);
}
