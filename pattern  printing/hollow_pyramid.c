#include <stdio.h>

int main() {
    int n = 5;

    int i,j;

    // hollow pyramid
    printf("hollow pyramid\n\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++) { // for(j = i; j < n; j++) -> this also works
            printf(" ");
        }

        for(j = 1; j <= 2*i-1; j++) {
            if(i == n || j == 1 || j == 2*i-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }    
    printf("\n");

    // inverted hollow pyramid
    printf("inverted hollow pyramid\n\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2*(n-i+1)-1; j++) {
            if(i == 1 || j == 1 || j == 2*(n-i+1)-1) {
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