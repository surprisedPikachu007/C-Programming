#include <stdio.h>

int main() {
    int n1 = 5, arr1[] = {7,5,2,5,5};
    int n2 = 5, arr2[] = {5,2,5,5,7};

    int n3 = n1+n2;
    int arr3[n3];

    printf("arr 1: ");
    for(int i = 0; i < n1; i++) {
        printf("%d ",arr1[i]);
    }
    printf("\n");

    printf("arr 2: ");
    for(int j = 0; j < n2; j++) {
        printf("%d ",arr2[j]);
    }
    printf("\n");

    int i = 0, j = 0, k = 0;

    while(i < n1) {
        for(int j = 0; j < k; j++) {
            if(arr3[j] == arr1[i]) {
                i++;
                j = -1;
            }
        }
        if(i < n1) {
            arr3[k] = arr1[i];
            i++; k++;
        }
    }

    while(j < n2) {
        for(int i = 0; i < k; i++) {
            if(arr3[i] == arr2[j]) {
                j++;
                i = -1;
            }
        }
        if(j < n2) {
            arr3[k] = arr2[j];
            j++; k++; 
        }
    }

    printf("union: ");
    for(int i = 0; i < k; i++) {
        printf("%d ",arr3[i]);
    }
    printf("\n");
}