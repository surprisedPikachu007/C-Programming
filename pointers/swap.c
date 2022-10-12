#include <stdio.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    printf("(%d, %d) -> ", a, b);
    swap(&a, &b);
    printf("(%d, %d)\n", a, b);
}