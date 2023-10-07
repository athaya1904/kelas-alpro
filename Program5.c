#include <stdio.h>

int main() {
    int angka1, angka2, hasil;
    char operator;

    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);

    printf("Masukkan operator (+, -, *, /): ");
    scanf(" %c", &operator);  

    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    if (operator == '+') {
        hasil = angka1 + angka2;
    } else if (operator == '-') {
        hasil = angka1 - angka2;
    } else if (operator == '*') {
        hasil = angka1 * angka2;
    } else if (operator == '/') {
     
        if (angka2 != 0) {
            hasil = angka1 / angka2;
        } else {
            printf("Pembagian dengan nol tidak diizinkan.\n");
            return 1;  
        }
    } else {
        printf("Operator tidak valid.\n");
        return 1; 
    }

    printf("Hasil: %d\n", hasil);

 
    if (hasil > 0 && hasil % 2 == 0) {
        printf("Hasil adalah bilangan positif genap.\n");
    } else if (hasil > 0 && hasil % 2 != 0) {
        printf("Hasil adalah bilangan positif ganjil.\n");
    } else if (hasil < 0) {
        printf("Hasil adalah bilangan negatif.\n");
    } else {
        printf("Hasil adalah nol.\n");
    }

    return 0;
}
