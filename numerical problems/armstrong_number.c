#include <stdio.h>

int main() {
    int n = 153;
    int original = n;
    int sum = 0;

    while(n != 0) {
        int num = n%10;
        sum += num * num * num;
        n /= 10;
    }

    if(sum == original)
        printf("%d is an armstrong number.\n", original);
    else
        printf("%d is not an armstrong number.\n", original);
}