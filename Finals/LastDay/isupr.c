#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(void){

    char isim[] = "Faruk";
    int uzunluk = strlen(isim);

    int buyuk = isupper(isim[0]);
    printf("%d\n", buyuk);
    int kucuk = islower(isim[1]);
    printf("%d\n", kucuk);
    isim[1] = toupper(isim[1]);
    printf("%c\n", isim[1]);
    isim[0] = tolower(isim[0]);
    printf("%c\n", isim[0]);

    printf("-----\n%s->%d",isim,uzunluk);
    // show the time
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("\n\n%d-%d-%d %d:%d:%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,tm.tm_hour, tm.tm_min, tm.tm_sec);

    return(0);
}