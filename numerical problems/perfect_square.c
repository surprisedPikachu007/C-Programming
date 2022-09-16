#include <stdio.h>

int main() {
    int n = 25, is_perfect_sqaure = 0;

    for(int i = 0; i < n; i++) {
        if(i*i == n) {
            is_perfect_sqaure = 1;
            break;
        }
    }

    if(is_perfect_sqaure)
        printf("%d is a perfect square.\n",n);
    else
        printf("%d not a perfect square.\n",n);
}