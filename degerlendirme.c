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

int kalan_dersler(int notlar[], const char *adlar[], int n) { return 0; }
const char *basari_durumu(double ort) { return "??"; }
