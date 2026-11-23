#include "ortalama.h"

double ortalama(int notlar[], int n) {
    if (n <= 0) return 0.0;
    int toplam = 0;
    for (int i = 0; i < n; i++) {
        toplam += notlar[i];
    }
    return (double)toplam / n;
}

double agirlikli_ortalama(int notlar[], int krediler[], int n) {
    if (n <= 0) return 0.0;
    int toplam = 0;
    int toplam_kredi = 0;
    for (int i = 0; i < n; i++) {
        toplam += notlar[i] * krediler[i];
        toplam_kredi += krediler[i];
    }
    if (toplam_kredi == 0) return 0.0;
    return (double)toplam / toplam_kredi;
}
int en_yuksek_ders(int notlar[], int n) {
    if (n <= 0) return -1;
    int en_iyi = 0;
    for (int i = 1; i < n; i++) {
        if (notlar[i] > notlar[en_iyi]) {
            en_iyi = i;
        }
    }
    return en_iyi;
}
