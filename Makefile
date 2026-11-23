CC = gcc
CFLAGS = -Wall -Wextra

karne: main.c veri.c ortalama.c degerlendirme.c
	$(CC) $(CFLAGS) -o $@ $^

test_ortalama: test_ortalama.c veri.c ortalama.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f karne test_ortalama
