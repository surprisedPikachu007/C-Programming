#include <stdio.h>

int main() {
    int n = 20;
    int arr[20] = {1,2,3,4,5,7,8,9,10};

    printf("before insertion arr = ");
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int position = 6, val = 6;
    for(int i = n-1; i > position-1; i--) {
        arr[i] = arr[i-1];
    }
    arr[position-1] = val;

    printf("after insertion arr  = ");
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}