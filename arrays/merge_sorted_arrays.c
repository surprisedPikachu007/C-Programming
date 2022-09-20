#include <stdio.h>

int main() {
    int n1 = 4, arr1[] = {1,3,7,8};
    int n2 = 6, arr2[] = {0,2,4,5,6,9};

    printf("sorted arr 1: ");
    for(int i = 0; i < n1; i++) {
        printf("%d ",arr1[i]);
    }
    printf("\n");

    printf("sorted arr 2: ");
    for(int j = 0; j < n2; j++) {
        printf("%d ",arr2[j]);
    }
    printf("\n");

    int i = 0, j = 0, k = 0;
    int n3 = n1 + n2;
    int arr3[n3];

    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else if(arr1[i] > arr2[j]) {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
        else {
            arr3[k] = arr1[i];
            i++;
            j++;
            k++;
        }
    }

    while(i < n1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while(j < n2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printf("merged arr: ");
    for(k = 0; k < n3; k++) {
        printf("%d ",arr3[k]);
    }
    printf("\n");
}