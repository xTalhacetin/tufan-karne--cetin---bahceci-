# Karne Hesaplayici
Ders notlarindan ortalama, harf notu ve kalinan dersleri cikaran terminal programi. C ile yazildi.

## Calistirma
```
gcc main.c veri.c ortalama.c degerlendirme.c -o karne
./karne        # Windows: karne.exe
```
Makefile ile: `make karne`. Testler: `make test_ortalama test_degerlendirme`.

Not: Veriler `veri.c` icinde tanimli, `veri.h` sadece `extern` bildirimleri icerir. Boylece "multiple definition" hatasi olusmaz.

## Ornek cikti
Kimya notu henuz girilmedi (-1), Turk Dili eklendi:
```
1) Basit ortalama: 73.33
2) Agirlikli ortalama: 71.31
3) En yuksek ders: Ingilizce (91)
4) Karne:
   Ders            Kredi   Not  Harf
   Programlama         6    88    BA
   Matematik I         6    62    DC
   Fizik I             5    45    FF
   Lineer Cebir        4    74    CC
   Kimya               4    -1    GR
   Ingilizce           3    91    AA
   Turk Dili           2    80    BB
5) Kalan dersler: Fizik I (45), toplam 1
6) Basari durumu: Basarili
```

## Kim ne yapti
- Kisi A (Talha Cetin): proje iskeleti, ortalama fonksiyonlari (ortalama, agirlikli_ortalama, en_yuksek_ders), test_ortalama, menu, Makefile, veri.c ayrimi, yeni veri, degerlendirme -1 duzeltmesi, README
- Kisi B (Nisa Bahceci): degerlendirme fonksiyonlari (harf_notu, kalan_dersler, basari_durumu), test_degerlendirme, menu sirasi, ortalama -1 duzeltmesi