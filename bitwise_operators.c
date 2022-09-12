#include <stdio.h>

int main() {
    unsigned int a = 10;
    printf("%d\n",~a);

    int y = 0;
    int z = y && (y |= 1); // lazy evaluation
    printf("y: %d z: %d\n", y, z);

    int b = 10, c = (++b,b++); // not lazy evaluation
    printf("b: %d c: %d\n", b, c);    
}