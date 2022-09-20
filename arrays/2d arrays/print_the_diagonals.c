#include <stdio.h>

int main() {
    int row = 3, col = 3;
    int arr[][2] = {1,2,3,4,5,6,7,8,9};

    printf("arr: \n");
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\ndiagonal: \n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i == j) printf("%d ",arr[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
}