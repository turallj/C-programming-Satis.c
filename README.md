# C-programming-Satis.c
C proqramlasdirma 
#include <stdio.h>
int main() {

    char ad[30];
    char soyad[30];
    int yas;
    char universitet[50];
    char ixtisas[50];

    printf("Adinizi daxil edin: ");
    scanf("%s", ad);

    printf("Soyadinizi daxil edin: ");
    scanf("%s", soyad);

    printf("Yasinizi daxil edin: ");
    scanf("%d", &yas);
    getchar();   // enter-i temizlemek ucun

    printf("Universitetinizi daxil edin: ");
    fgets(universitet, 50, stdin);

    printf("Ixtisasinizi daxil edin: ");
    fgets(ixtisas, 50, stdin);

    printf("\n--- Daxil etdiyiniz melumatlar ---\n");
    printf("Ad: %s\n", ad);
    printf("Soyad: %s\n", soyad);
    printf("Yas: %d\n", yas);
    printf("Universitet: %s", universitet);
    printf("Ixtisas: %s", ixtisas);

    return 0;
}

