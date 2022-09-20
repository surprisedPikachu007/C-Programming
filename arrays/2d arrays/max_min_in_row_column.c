#include <stdio.h>

int main() {
    int row = 3, col = 2;
    int arr[][2] = {1,2,3,4,5,6};

    printf("arr: \n");
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("maximum elements in each row: \n");
    for(int i = 0; i < row; i++) {
        int max = arr[i][0];
        for(int j = 0; j < col; j++) {
            if(arr[i][j] > max) max = arr[i][j];
        }
        printf("max in row %d: %d\n",i+1,max);
    }

    printf("\n");

    printf("maximum elements in each column: \n");
    for(int j = 0; j < col; j++) {
        int max = arr[0][j];
        for(int i = 0; i < row; i++) {
            if(arr[i][j] > max) max = arr[i][j];
        }
        printf("max in column %d: %d\n",j+1,max);
    }

    printf("\n");

    printf("minimum elements in each row: \n");
    for(int i = 0; i < row; i++) {
        int min = arr[i][0];
        for(int j = 0; j < col; j++) {
            if(arr[i][j] < min) min = arr[i][j];
        }
        printf("min in row %d: %d\n",i+1,min);
    }

    printf("\n");

    printf("minimum elements in each column: \n");
    for(int j = 0; j < col; j++) {
        int min = arr[0][j];
        for(int i = 0; i < row; i++) {
            if(arr[i][j] < min) min = arr[i][j];
        }
        printf("min in column %d: %d\n",j+1,min);
    }
}