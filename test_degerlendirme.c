#include <stdio.h>
#include "veri.h"
#include "ortalama.h"
#include "degerlendirme.h"

int main(void) {
    printf("Harf notlari:\n");
    for (int i = 0; i < DERS_SAYISI; i++) {
        printf("  %d -> %s\n", notlar[i], harf_notu(notlar[i]));
    }

    printf("Kalan dersler:\n");
    int k = kalan_dersler(notlar, ders_adlari, DERS_SAYISI);
    printf("Kalan ders sayisi: %d\n", k);

    double ort = agirlikli_ortalama(notlar, krediler, DERS_SAYISI);
    printf("Basari durumu (%.2f): %s\n", ort, basari_durumu(ort));
    return 0;
}
