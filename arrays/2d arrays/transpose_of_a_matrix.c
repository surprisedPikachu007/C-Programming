#include <stdio.h>

int main() {
    int row = 3, col = 3;
    int arr[][3] = {1,2,3,4,5,6,7,8,9};
    int transpose[col][row];

    printf("given matrix: \n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    printf("transpose: \n");
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}