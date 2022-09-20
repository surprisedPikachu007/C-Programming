#include <stdio.h>

int main() {
    int row = 3, col = 3;
    int arr1[][3] = {1,2,3,4,5,6,7,8,9};
    int arr2[][3] = {1,2,3,4,5,6,7,8,9};
    int sum[][3] = {};
    
    printf("arr1: \n");
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("arr: \n");
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\n");
    printf("sum: \n");
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}