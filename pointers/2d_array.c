#include <stdio.h>

int main() {
    int a[3][3] = {0,1,2,3,4,5,6,7,8};

    // we take an integer's size as 4 bytes

    printf("a = %d \n", a);  // a = -11360
    printf("*a = %d\n", *a);  // *a = -11360
    printf("**a = %d\n\n", **a);  // **a = 0

    printf("a + 1 = %d\n", a + 1);  // a + 1 = -11348
    printf("*a + 1 = %d *(a + 1) = %d\n", *a + 1, *(a + 1));  // *a + 1 = -11356  *(a + 1) = -11348
    printf("**a + 1 = %d *(*a + 1) = %d *(*(a + 1)) = %d\n\n", **a + 1, *(*a + 1), *(*(a + 1)));  // **a + 1 = 1 *(*a + 1) = 1 *(*(a + 1)) = 3

}