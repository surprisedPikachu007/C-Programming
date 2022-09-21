#include <stdio.h>

int main() {
    int row = 5, col = 5;
    int arr[5][5];
    int k = 1;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            arr[i][j] = k++;
        }
    }

    printf("the given matrix is: \n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }

    
    printf("\nspiral: \n");
    int sr = 0, er = row-1, sc = 0, ec = col-1;

    while(sr <= er && sc <= ec) {
        for(int i = sc; i <= ec; i++) printf("%d ",arr[sr][i]);
        sr++;

        for(int i = sr; i <= er; i++) printf("%d ",arr[i][ec]);
        ec--;

        for(int i = ec; i >= sc; i--) printf("%d ",arr[er][i]);
        er--;

        for(int i = er; i >= sr; i--) printf("%d ",arr[i][sc]);
        sc++;
    }
}