#include <stdio.h>

int main() {
    int n = 5;
    int i,j;

    // hollow left aligned triangle
    printf("hollow left aligned trianlge\n\n");

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            if(i == 1 || i == n || j == 1 || j == i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");


    // hollow inverted left aligned triangle
    printf("hollow inverted left aligned triangle\n\n");

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i+1; j++) {
            if(i == 1 || j == 1 || j == n-i+1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    } 
    printf("\n");


    // hollow right aligned triangle
    printf("hollow right aligned triangle\n\n");

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++) {
            printf(" ");
        }

        for(; j <= n; j++) {
            if(i == n || j == n-i+1 || j == n) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }
    printf("\n");


    // hollow inverted right aligned triangle
    printf("inverted right aligned triangle\n\n");

    for(i = 1; i <= n; i++) {
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        for(; j <= n; j++) {
            if(i == 1 || j == i || j == n) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}