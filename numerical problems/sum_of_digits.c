#include <stdio.h>

int main() {
    int n = 2233;
    int sum = 0;

    // sum of digits of a number
    while(n != 0) {
        sum += n%10;
        n /= 10;
    }


    printf("sum of all digits in %d: %d.\n", n, sum);

    // sum of digits of a number except the first digit
    n = 2233;
    sum = 0;

    while(n/10 != 0) {
        sum += n%10;
        n /= 10;
    }

    printf("sum of digits in %d except the first digit: %d.\n", n, sum);
}