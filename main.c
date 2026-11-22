#include <stdio.h>
#include "veri.h"
#include "ortalama.h"
#include "degerlendirme.h"

int main(void) {
    int secim;
    do {
        printf("\n=== KARNE HESAPLAYICI ===\n");
        /* MENU: secenekler buraya */
        printf("0) Cikis\n> ");
        if (scanf("%d", &secim) != 1) break;
        switch (secim) {
            /* MENU: case'ler buraya */
            case 0: break;
            default: printf("Gecersiz secim\n");
        }
    } while (secim != 0);
    return 0;
}