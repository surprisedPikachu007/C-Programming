#include <stdio.h>

int main() {
    int n = 20;
    int arr[20] = {1,2,3,4,5,6,6,7,8,9,10};

    printf("before deletion arr = ");
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int position = 6;
    for(int i = position-1; i < n; i++) {
        arr[i] = arr[i+1];
    }

    printf("after deletion arr  = ");
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}