#include <stdio.h>

int main() {
    int n = 10;
    int sorted_arr[10] = {1,2,4,5,6,7,8,9};

    printf("sorted arr: ");
    for(int i = 0; i < n; i++) printf(" %d",sorted_arr[i]);

    int val = 3;

    int i;
    for(i = 0; i < n; i++) {
        if(sorted_arr[i] >= val) break;
    } 

    // shift elements to right
    for(int j = n-1; j > i; j--) {
        sorted_arr[j] = sorted_arr[j-1];
    }

    sorted_arr[i] = val;

    printf("\nafter insertion, arr: ");
    for(int i = 0; i < n; i++) printf(" %d",sorted_arr[i]);
}