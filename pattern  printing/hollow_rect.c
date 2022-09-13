#include <stdio.h>

int main() {
    int l,b;
    printf("Enter length: ");
    scanf("%d",&l);
    printf("Enter breadth: ");
    scanf("%d",&b);

    for(int i=1; i<=l; i++) {
        for(int j=1; j<=b; j++) {
            if(i==1 || i==l || j==1 || j==b) {
                printf("*");
                continue;
            }
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}