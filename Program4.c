#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, luas;

    const float phi = 3.14159;

    printf("Masukkan radius lingkaran: ");
    scanf("%f", &radius);

    luas = PI * radius * radius; 

    printf("Luas lingkaran dengan radius %.2f adalah %.2f\n", radius, luas);

    return 0;
}
