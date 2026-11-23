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
        printf("1) Karneyi goster\n");
        printf("2) Basit ortalama\n");
        printf("3) Agirlikli ortalama\n");
        printf("4) En yuksek notlu ders\n");
        printf("5) Kalan dersler\n");
        printf("6) Basari durumu\n");
        printf("0) Cikis\n> ");
        if (scanf("%d", &secim) != 1) break;
        switch (secim) {
            case 1:
                karne_yazdir();
                break;
            case 2:
                printf("Basit ortalama: %.2f\n", ortalama(notlar, DERS_SAYISI));
                break;
            case 3:
                printf("Agirlikli ortalama: %.2f\n", agirlikli_ortalama(notlar, krediler, DERS_SAYISI));
                break;
            case 4: {
                int i = en_yuksek_ders(notlar, DERS_SAYISI);
                if (i >= 0) printf("En yuksek not: %s (%d)\n", ders_adlari[i], notlar[i]);
                break;
            }
            case 5: {
                printf("Kalan dersler:\n");
                int k = kalan_dersler(notlar, ders_adlari, DERS_SAYISI);
                if (k == 0) printf("Kalan ders yok\n");
                break;
            }
            case 6:
                printf("Basari durumu: %s\n", basari_durumu(agirlikli_ortalama(notlar, krediler, DERS_SAYISI)));
                break;
            case 0:
                break;
            default:
                printf("Gecersiz secim\n");
        }
    } while (secim != 0);
    return 0;
}
