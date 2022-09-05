#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int temp = n;
    int spaces = 1;

    if(n < 0) {
        spaces++;
        temp *= -1;
    }

    while(temp != 0) {
        temp /= 10;
        spaces++;
    }

    for(int i = 1; i<=10; i++) {
        printf("%-2d * %d = %*d\n", i, n, spaces, i*n);
    }
}