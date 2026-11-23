#include <stdio.h>
#include "veri.h"
#include "ortalama.h"
#include "degerlendirme.h"

static void karne_yazdir(void) {
    printf("\n%-14s %6s %5s %5s\n", "Ders", "Kredi", "Not", "Harf");
    for (int i = 0; i < DERS_SAYISI; i++) {
        printf("%-14s %6d %5d %5s\n", ders_adlari[i], krediler[i], notlar[i], harf_notu(notlar[i]));
    }
}

int main(void) {
    int secim;
    do {
        printf("\n=== KARNE HESAPLAYICI ===\n");
        /* MENU: secenekler buraya */
        printf("1) Basit ortalama\n");
        printf("2) Agirlikli ortalama\n");
        printf("3) En yuksek ders\n");
        printf("4) Karne (harf notlari)\n");
        printf("5) Kalan dersler\n");
        printf("6) Basari durumu\n");
        printf("7) Fizik I icin hedef not (75)\n");
        printf("8) 4'luk sistem ortalamasi\n");
        printf("0) Cikis\n> ");
        if (scanf("%d", &secim) != 1) break;
        switch (secim) {
            /* MENU: case'ler buraya */
            case 1:
                printf("Basit ortalama: %.2f\n", ortalama(notlar, DERS_SAYISI));
                break;
            case 2:
                printf("Agirlikli ortalama: %.2f\n", agirlikli_ortalama(notlar, krediler, DERS_SAYISI));
                break;
            case 3: {
                int i = en_yuksek_ders(notlar, DERS_SAYISI);
                if (i >= 0) printf("En yuksek ders: %s (%d)\n", ders_adlari[i], notlar[i]);
                break;
            }
            case 4:
                karne_yazdir();
                break;
            case 5: {
                printf("Kalan dersler:\n");
                int k = kalan_dersler(notlar, ders_adlari, DERS_SAYISI);
                printf("Kalan ders sayisi: %d\n", k);
                break;
            }
            case 6:
                printf("Basari durumu: %s\n", basari_durumu(agirlikli_ortalama(notlar, krediler, DERS_SAYISI)));
                break;
            case 7: {
                int h = hedef_not(notlar, krediler, DERS_SAYISI, 2, 75.0);
                if (h >= 0) printf("Fizik I butunlemeden en az %d alinmali\n", h);
                else printf("Fizik I ile 75'e ulasilamaz\n");
                break;
            }
            case 8:
                printf("4'luk sistem ortalamasi: %.2f\n", dortluk_ortalama(notlar, krediler, DERS_SAYISI));
                break;
            case 0:
                break;
            default:
                printf("Gecersiz secim\n");
        }
    } while (secim != 0);
    return 0;
}
