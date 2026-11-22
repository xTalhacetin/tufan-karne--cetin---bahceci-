#include <stdio.h>
#include "degerlendirme.h"

const char *harf_notu(int puan) {
    if (puan >= 90) return "AA";
    if (puan >= 85) return "BA";
    if (puan >= 80) return "BB";
    if (puan >= 75) return "CB";
    if (puan >= 70) return "CC";
    if (puan >= 60) return "DC";
    if (puan >= 50) return "DD";
    return "FF";
}

int kalan_dersler(int notlar[], const char *adlar[], int n) {
    int sayac = 0;
    for (int i = 0; i < n; i++) {
        if (notlar[i] < 50) {
            printf("%s (%d)\n", adlar[i], notlar[i]);
            sayac++;
        }
    }
    return sayac;
}
const char *basari_durumu(double ort) {
    if (ort >= 85) return "Yuksek onur";
    if (ort >= 75) return "Onur";
    if (ort >= 50) return "Basarili";
    return "Basarisiz";
}
