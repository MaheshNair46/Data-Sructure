// Aim: to develop a program that represents polynomial and implements addition of polynomials using array of structure
#include <stdio.h>
typedef struct {
    int coefficient;
    int exponent;
} PolyTerm;

int main() {
    PolyTerm a[50], b[50], c[50];
    int i, deg1, deg2;

    printf("Enter the degree for Polynomial 1: ");
    scanf("%d", &deg1);
    printf("Enter the coefficients: ");
    for (i = 0; i <= deg1; i++) {
        printf("x^%d: ", i);
        scanf("%d", &a[i].coefficient);
        a[i].exponent = i;
    }

    printf("Enter the degree for Polynomial 2: ");
    scanf("%d", &deg2);
    printf("Enter the coefficients: ");
    for (i = 0; i <= deg2; i++) {
        printf("x^%d: ", i);
        scanf("%d", &b[i].coefficient);
        b[i].exponent = i;
    }

  
    printf("\nPolynomial 1: ");
    for (i = 0; i <= deg1; i++) {
        if (a[i].coefficient != 0) {
            if (i == 0) {
                printf("%d", a[i].coefficient);
            } else if (a[i].coefficient > 0) {
                printf(" + %dx^%d", a[i].coefficient, a[i].exponent);
            } else {
                printf(" - %dx^%d", -a[i].coefficient, a[i].exponent);
            }
        }
    }

    printf("\nPolynomial 2: ");
    for (i = 0; i <= deg2; i++) {
        if (b[i].coefficient != 0) {
            if (i == 0) {
                printf("%d", b[i].coefficient);
            } else if (b[i].coefficient > 0) {
                printf(" + %dx^%d", b[i].coefficient, b[i].exponent);
            } else {
                printf(" - %dx^%d", -b[i].coefficient, b[i].exponent);
            }
        }
    }

  
    int maxDeg = (deg1 > deg2) ? deg1 : deg2;
    for (i = 0; i <= maxDeg; i++) {
        int coeffA = (i <= deg1) ? a[i].coefficient : 0;
        int coeffB = (i <= deg2) ? b[i].coefficient : 0;
        c[i].coefficient = coeffA + coeffB;
        c[i].exponent = i;
    }


    printf("\nResult: ");
    for (i = 0; i <= maxDeg; i++) {
        if (c[i].coefficient != 0) {
            if (i == 0) {
                printf("%d", c[i].coefficient);
            } else if (c[i].coefficient > 0) {
                printf(" + %dx^%d", c[i].coefficient, c[i].exponent);
            } else {
                printf(" - %dx^%d", -c[i].coefficient, c[i].exponent);
            }
        }
    }

    return 0;
}