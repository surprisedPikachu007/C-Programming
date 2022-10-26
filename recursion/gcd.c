#include <stdio.h>

int gcd(int m, int n) {
    if(m < n) {
        int temp = m;
        m = n;
        n = m;
    }

    if(m%n == 0)
        return n;

    return(n, m%n);
}

int main() {
    int m = 10, n = 5;
    printf("GCD(%d, %d) = %d\n", m, n, gcd(m,n));
}