#include <stdio.h>

int main() {
    int n = 153;
    int original = n;
    int sum = 0, count = 0;

    while(n != 0) {
        count++;
        n /= 10;
    }

    n = original;
    while(n != 0) {
        int num = n%10;
        int partial_sum = num;
        for(int i = 0; i < count-1; i++)
            partial_sum *= num;

        sum += partial_sum;
        n /= 10;
    }

    if(sum == original)
        printf("%d is an armstrong number.\n", original);
    else
        printf("%d is not an armstrong number.\n", original);
}