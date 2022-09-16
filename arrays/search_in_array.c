#include <stdio.h>

int main() {
    int n = 20;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    // search for a value - val
    int val = 78, found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == val) { 
            printf("element found at position: %d\n",i+1);
            found = 1;
        }
    }
    if(!found) {
        printf("element not found.\n");
    }
}