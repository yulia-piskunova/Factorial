#include <stdio.h>

int factorial(int n) {

}

void main() {
    int n, nf;
    printf("Enter n: ");
    scanf("%d", &n);
    if ( n >= 0 ) {
        nf = factorial(n);
        printf("n! = %d\n", nf);
    } else
        printf("Invalid number");

}