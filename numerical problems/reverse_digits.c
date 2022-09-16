#include <stdio.h>

int main() {
    int n = 1234;
    int reverse = 0;

    printf("number: %d\n", n);

    while(n != 0) {
        reverse = (reverse * 10) + (n % 10);
        n /= 10;
    }

    printf("reverse: %d\n",reverse);
}