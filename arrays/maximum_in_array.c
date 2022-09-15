#include <stdio.h>

int main() {
    int n = 5;
    int arr[] = {1,5,3,4,2};

    int max1 = 0;
    for(int i=0; i<n; i++) {
        arr[i] > arr[max1] ? max1 = i : NULL;   // first largest
    }

    int max2 = 0;
    for(int i=0; i<n; i++) {
        if(i != max1)
        arr[i] > arr[max2] ? max2 = i : NULL;   // second largest 
    }

    printf("Largest: %d, Second Largest: %d\n",arr[max1], arr[max2]);


    // max in even
    int maxEven = arr[0];
    for(int i=0; i<n; i += 2) {
        arr[i] > maxEven ? maxEven = arr[i] : NULL;
    }
    printf("Maximum element in even position: %d\n", maxEven);

    // min in odd
    int minOdd = arr[1];
    for(int i=1; i<n; i += 2) {
        arr[i] < minOdd ? minOdd = arr[i] : NULL;
    }
    printf("Minimum element in odd position: %d\n", minOdd);
}