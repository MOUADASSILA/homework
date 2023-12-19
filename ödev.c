#include <stdio.h>
#include <string.h>

int main()
{
    char metin[1000]; // Kullanıcıdan alınacak metin için yeterli büyüklükte bir dizi
    int kelimeSayisi = 0, harfSayisi = 0, i;

    printf("Metin giriniz: ");
    gets(metin); // Kullanıcıdan metin girişi alınır (gets kullanımı dikkat edilmesi gereken bir husustur)

    for (i = 0; metin[i] != '\0'; i++)
    {
        if (metin[i] == ' ' || metin[i] == '\t' || metin[i] == '\n')
        {
            kelimeSayisi++; // Boşluk, sekme veya satır sonu karakteri bulunduğunda kelime sayısını artır
        }
        else
        {
            harfSayisi++; // Boşluk, sekme veya satır sonu karakteri dışındaki karakterler harf olarak kabul edilir
        }
    }

    // Son kelimeyi eklemek için kelime sayısını artır
    if (harfSayisi > 0)
    {
        kelimeSayisi++;
    }

    printf("Kelime Sayisi: %d\n", kelimeSayisi);
    printf("Harf Sayisi: %d\n", harfSayisi);

    return 0;
}