#include <stdio.h>

int main() {
    int n = 10;
    int arr[10] = {1,2,2,3,4,2,5,5,9,0};

    printf("unique elements: ");
    for(int i = 0; i < n; i++) {
        int j;
        for(j = 0; j < n; j++) {
            if(i == j) continue;
            if(arr[i] == arr[j]) break;
        }
        if(j == n) printf(" %d",arr[i]);
    }

    // eliminating duplicates
    printf("\nwithout duplicates: ");
    for(int i = 0; i < n; i++) {
        int j;
        for(j = 0; j < i; j++) {
            if(i == j) continue;
            if(arr[i] == arr[j]) break;
        }
        if(j == i) printf(" %d",arr[i]);
    }
}