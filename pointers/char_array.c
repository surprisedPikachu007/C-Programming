#include <stdio.h>

int main() {
    char a[3][5] = {"abc", "abcde", "abc"};

    printf("a = %d *a = %s **a = %c\n", a, *a, **a);

    printf("a + 1 = %s *a + 1 = %s *(a + 1) = %s\n", a + 1, *a + 1, *(a + 1));
}