#include <stdio.h>

int main() {
    int n = 10;
    int arr[10] = {3,6,2,1,9,4,7,5,8,0};

    printf("arr: ");
    for(int i = 0; i < n; i++) {
        printf(" %d",arr[i]);
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nafter bubble sorting: ");
    for(int i = 0; i < n; i++) {
        printf(" %d",arr[i]);
    }
}