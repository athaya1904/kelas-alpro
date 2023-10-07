#include <stdio.h>
#include <string.h>

int main() {
    char nama[50];
    int umur;

    printf("Masukkan nama: ");
    scanf("%s", nama);

    printf("Masukkan usia: ");
    scanf("%d", &umur);

    while ((getchar()) != '\n');

    char alamat[100];

    printf("\nMasukkan alamat: " );
    gets(alamat);

    char profesi[100];

    printf("Masukkan pekerjaan: ");
    fgets(profesi, sizeof(profesi), stdin);

    printf("\nInformasi yang dimasukkan:\n");
    printf("Nama: %s\n", nama);
    printf("Usia: %d tahun\n", umur);
    printf("Alamat: %s\n", alamat);
    printf("Pekerjaan: %s", profesi);

    return 0;
}
