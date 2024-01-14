#include <stdio.h>
#include <stdlib.h>

struct ogrenciler {
    char isim[25];
    int vize;
};

struct ogrenciler* giris(void);

int main(void) {
    struct ogrenciler *ogrenci = giris();

    printf("%s --> %d\n", ogrenci->isim, ogrenci->vize);

    // Bellekten ayrılan yerleri serbest bırak
    free(ogrenci);

    return 0;
}

struct ogrenciler* giris(void) {
    struct ogrenciler *temp = (struct ogrenciler*)malloc(sizeof(struct ogrenciler));

    printf("Öğrencinin adini ve vize notunu giriniz\n");
    scanf("%s %d", temp->isim, &temp->vize);

    return temp;
}
