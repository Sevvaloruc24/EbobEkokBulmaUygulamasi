#include <stdio.h>

// EBOB hesaplama fonksiyonu
int hesaplaEBOB(int a, int b) {
    while (b != 0) {
        int gecici = b;
        b = a % b;
        a = gecici;
    }
    return a;
}

// EKOK hesaplama fonksiyonu
int hesaplaEKOK(int a, int b) {
    return (a * b) / hesaplaEBOB(a, b);
}

int main() {
    int sayi1, sayi2, ebob, ekok;

    // Kullanici girdisi
    printf("Iki sayi giriniz (bosluk birakarak): ");
    scanf("%d %d", &sayi1, &sayi2);

    // EBOB ve EKOK hesaplama
    ebob = hesaplaEBOB(sayi1, sayi2);
    ekok = hesaplaEKOK(sayi1, sayi2);

    // Sonuclari yazdir
    printf("EBOB(%d, %d): %d\n", sayi1, sayi2, ebob);
    printf("EKOK(%d, %d): %d\n", sayi1, sayi2, ekok);

    return 0;
}

