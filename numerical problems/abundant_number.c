#include <stdio.h>

int main() {
    int n = 12, sum = 0;

    for(int i = 1; i<=n/2; i++) {
        if(n%i == 0) {
            (sum += i);
        }
    }

    if(sum > n)
        printf("%d is an abundant number.\n", n);
    else
        printf("%d is not an abundant number.\n", n);

    // abundant numbers in a range
    int range = 100;
    printf("abundant numbers in range 0 to %d: ", range);
    for(int n = 0; n <= range; n++) {
        int sum = 0;
        for(int i = 1; i <= n/2; i++) {
            if(n%i == 0) {
                sum += i;
            }
        }
        if(sum > n)
            printf(" %d", n);
    }
}