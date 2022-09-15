#include <stdio.h>

int main() {
    int arr[] = {1,5,3,4,2};

    int max1 = 0;
    for(int i=0; i<5; i++) {
        arr[i] > arr[max1] ? max1 = i : NULL;
    }

    int max2 = 0;
    for(int i=0; i<5; i++) {
        if(i != max1)
        arr[i] > arr[max2] ? max2 = i : NULL;
    }

    printf("max1: %d, max2: %d",arr[max1], arr[max2]);
}