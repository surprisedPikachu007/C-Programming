#include <stdio.h>

int main() {
    int n = 5;
    int i,j;

    printf("hollow diamond\n\n");
    // hollow pyramid for the first half
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++) { // for(j = i; j < n; j++) -> this also works
            printf(" ");
        }

        for(j = 1; j <= 2*i-1; j++) {
            if(j == 1 || j == 2*i-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }

    // hollow inverted pyramid for the second half with n = n-1
    n = n-1;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2*(n-i+1)-1; j++) {
            if(j == 1 || j == 2*(n-i+1)-1) {
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