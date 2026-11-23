# Karne Hesaplayici

C ile yazilmis, konsoldan calisan basit bir karne hesaplayici.

## Dosyalar
- `veri.h` / `veri.c`: ders adlari, krediler ve notlar
- `ortalama.h` / `ortalama.c`: basit ortalama, agirlikli ortalama, en yuksek notlu ders
- `degerlendirme.h` / `degerlendirme.c`: harf notu, kalan dersler, basari durumu
- `main.c`: menu
- `test_ortalama.c`: ortalama fonksiyonu testi

## Derleme ve calistirma
```
make karne
./karne
```

Test icin: `make test_ortalama && ./test_ortalama`
