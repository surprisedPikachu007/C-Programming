#include <stdio.h>

int main() {
    int a[] = {1,20,30,40,50};
    int n = 5;

    printf("%d\n[%d] = %d\n\n", a, a, *a);

    scanf("%d", &a[0]); // 10
    
    printf("\n%d %d\n\n", *a+1, *(a+1)); // 11 20

    for(int i = 0; i < n; i++)
        scanf("%d", a + i);  // 1 2 3 4 5

    for(int i = 0; i < n; i++) 
        printf("%d ", *a + i);  // 1 2 3 4 5
}