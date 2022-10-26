#include <stdio.h>

int lcm(int m, int n) {
    int x = m>n ? m : n;

    while(x <= m*n) 
        if(x%m == 0 && x%n == 0)
            return x++;

    return 0;
}

int main() {
    int m = 10, n = 5;
    printf("LCM(%d, %d) = %d\n", m, n, lcm(m,n));
}