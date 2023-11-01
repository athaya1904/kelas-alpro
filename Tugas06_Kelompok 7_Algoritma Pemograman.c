#include <stdio.h>
                         
double fungsi(double x) {
    return x * x;
}


int integraltrapezoid(double a, double b, int n) {
    double h = (b - a) / n;
    double integral = (fungsi(a) + fungsi(b)) / 2.0;

    for (int i = 1; i < n; i++) {
        integral += fungsi(a + i * h);
    }

    return (int)integral* n * h; 
}

int main() {
    double a, b;
    int n;

    printf("Masukkan batas bawah integral: ");
    scanf("%lf", &a);
    printf("Masukkan batas atas integral: ");
    scanf("%lf", &b);
    printf("Masukkan fungsi : ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Silahkan coba lagi\n");
        return 1;
    }

    int integral = integraltrapezoid(a, b, n);

    printf("Hasil integral: %d\n", integral);

    return 0;
}
