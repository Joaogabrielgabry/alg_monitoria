#include <stdio.h>

int main() {
    double a, b, c;

    printf("Digite tres numeros: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b && a > c) {
        printf("O maior numero eh %lf\n", a);
    }
    else if (b > a && b > c) {
        printf("O maior numero eh %lf\n", b);
    }
    else {
        printf("O maior numero eh %lf\n", c);
    }

    return 0;
}