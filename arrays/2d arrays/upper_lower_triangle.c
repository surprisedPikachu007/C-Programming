#include <stdio.h>

int main() {
    int row = 3, col = 3;
    int arr[][3] = {1,2,3,4,5,6,7,8,9};

    printf("arr: \n");
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("upper triangular matrix: \n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(j >= i) printf("%d ",arr[i][j]);
            else printf("0 ");
        }
        printf("\n");
    }

    printf("\n");

    printf("lower triangular matrix: \n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i >= j) printf("%d ",arr[i][j]);
            else printf("0 ");
        }
        printf("\n");
    }

    // check whether a given matrix is an upper triangular matrix
    int upper_triangular_matrix [][3] = {1,2,3,0,5,6,0,0,9};
    int upper = 1;

    printf("\n");
    printf("given matrix: \n");
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ",upper_triangular_matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i == j && upper_triangular_matrix[i][j] == 0) upper = 0;
            if(i > j && upper_triangular_matrix[i][j] != 0) upper = 0;
        }
    }

    if(upper) printf("the given matrix is an upper triangular matrix.\n");

    // check whether a given matrix is a lower triangular matrix
    int lower_triangular_matrix [][3] = {1,0,0,4,5,0,7,8,9};
    int lower = 1;

    printf("\n");
    printf("given matrix: \n");
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ",lower_triangular_matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i == j && lower_triangular_matrix[i][j] == 0) lower = 0;
            if(j > i && lower_triangular_matrix[i][j] != 0) lower = 0;
        }
    }

    if(lower) printf("the given matrix is a lower triangular matrix.\n");

    // check whether a given matrix is a diagonal triangular matrix
    int diagonal_matrix [][3] = {1,0,0,0,5,0,0,0,9};
    int diagonal = 1;

    printf("\n");
    printf("given matrix: \n");
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ",diagonal_matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i == j && diagonal_matrix[i][j] == 0) diagonal = 0;
            if(i != j && diagonal_matrix[i][j] != 0) diagonal = 0;
        }
    }

    if(diagonal) printf("the given matrix is a diagonal triangular matrix.\n");

}