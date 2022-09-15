#include <stdio.h>

int main() {
    int arr1[5]; // declaration
    int arr2[5] = {1,2,3,4,5}; // initialization
    int arr3[5] = {1,2,3,4,5,6,7,8}; // excess elements in array initializer - prints garbage value for excess elements
    int arr4[5] = {}; // initialize with 0
    int arr5[5] = {0}; // initialize with 0
    int arr6[5] = {1,2,3}; // initialize arr[3] and arr[5] with 0 i.e. arr6 = {1,2,3,0,0}
}