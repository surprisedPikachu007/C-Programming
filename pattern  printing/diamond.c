#include <stdio.h>

int main() {
    int n = 5;
    int i,j;

    printf("diamond\n\n");
    // pyramid for the first half
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++) { // for(j = i; j < n; j++) -> this also works
            printf(" ");
        }

        for(j = 1; j <= 2*i-1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // inverted pyramid for the second half with n = n-1
    n = n-1;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2*(n-i+1)-1; j++) {
            printf("*");
        }
        printf("\n");
    }    
    printf("\n");
}