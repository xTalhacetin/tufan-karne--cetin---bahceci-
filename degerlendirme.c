#include <stdio.h>
#include "degerlendirme.h"

const char *harf_notu(int puan) {
    if (puan < 0) return "GR"; 
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
        if (notlar[i] >= 0 && notlar[i] < 50) { 
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

static double dortluk_puan(int puan) {
    if (puan >= 90) return 4.0;
    if (puan >= 85) return 3.5;
    if (puan >= 80) return 3.0;
    if (puan >= 75) return 2.5;
    if (puan >= 70) return 2.0;
    if (puan >= 60) return 1.5;
    if (puan >= 50) return 1.0;
    return 0.0;
}

double dortluk_ortalama(int notlar[], int krediler[], int n) {
    double toplam = 0.0;
    int toplam_kredi = 0;
    for (int i = 0; i < n; i++) {
        if (notlar[i] < 0) continue; /* GR: not yok, atlanir */
        toplam += dortluk_puan(notlar[i]) * krediler[i];
        toplam_kredi += krediler[i];
    }
    if (toplam_kredi == 0) return 0.0;
    return toplam / toplam_kredi;
}
