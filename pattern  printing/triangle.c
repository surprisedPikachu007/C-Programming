#include <stdio.h>

int main() {
    int n = 5;
    int i,j;

    // left aligned triangle
    printf("left aligned trianlge\n\n");

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");


    // inverted left aligned triangle
    printf("inverted left aligned triangle\n\n");

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");


    // right aligned triangle
    printf("right aligned triangle\n\n");

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++) {
            printf(" ");
        }

        for(; j <= n; j++) {
            printf("*");
        }

        printf("\n");
    }
    printf("\n");


    // inverted right aligned triangle
    printf("inverted right aligned triangle\n\n");

    for(i = 1; i <= n; i++) {
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        for(; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}