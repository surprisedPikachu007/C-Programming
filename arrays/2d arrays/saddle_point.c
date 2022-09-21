#include <stdio.h>

int main() {
    int row = 3, col = 3;
    int arr[][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};

    int mins[row][2], maxs[col][2];

    for(int i = 0; i < row; i++) {
        int min[2] = {i,0};
        for(int j = 0; j < col; j++) {
            if(arr[i][j] < arr[min[0]][min[1]]) min[0] = i, min[1] = j;
        }
        mins[i][0] = min[0]; mins[i][1] = min[1];
    }

    for(int i = 0; i < col; i++) {
        int max[2] = {0,i};
        for(int j = 0; j < row; j++) {
            if(arr[j][i] > arr[max[0]][max[1]]) max[0] = j, max[1] = i;
        }
        maxs[i][0] = max[0], maxs[i][1] = max[1];
    }

    printf("min in rows: \n");
    for(int i = 0; i < row; i++) {
        printf("%d %d\n",mins[i][0],mins[i][1]);
    }
    printf("\nmax in cols: \n");
    for(int i = 0; i < col; i++) {
        printf("%d %d\n",maxs[i][0],maxs[i][1]);
    }

    int saddle_point[] = {-1,-1};
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(mins[i][1] == maxs[j][1]) saddle_point[0] = i, saddle_point[1] = j;
        }
    }

    int i = saddle_point[0], j = saddle_point[1];
    if(i == -1) printf("\nthere is no saddle point in the given matrix.\n");
    else printf("\nthe saddle point of the given matrix is: %d.\n", arr[i][j]);
}