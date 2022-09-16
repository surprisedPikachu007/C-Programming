#include <stdio.h>

int main() {
    int n = 11, m = 11;
    int i,j;

    // hollow rectangle with diagonals
    printf("hollow rectangle with diagonals\n\n");
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            // condition:  j - 1 == j - i
            int cond = i == j || i + j == n+1;
            if(i==1 || i==n || j==1 || j==m || cond) {
                printf("*");
                continue;
            }
            printf(" ");
        }
        printf("\n");
    }
}