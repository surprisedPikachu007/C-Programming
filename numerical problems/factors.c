#include <stdio.h>

int main() {
    int n = 20;

    printf("factors of %d: ", n);
    for(int i = 1; i <= n; i++) {
        if(n%i == 0)
            printf("%d ",i);
    }
}