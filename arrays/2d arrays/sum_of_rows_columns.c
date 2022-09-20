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

    printf("\nsum of: \n");
    for(int i = 0; i < row ; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum +=  arr[i][j];
        }
        printf("%d\n",sum);
    }

    printf("\nsum of columns: ");
    for(int j = 0; j < col ; j++) {
        int sum = 0;
        for(int i = 0; i < row; i++) {
            sum +=  arr[j][i];
        }
        printf(" %d",sum);
    }
}