#include <stdio.h>

int main() {
    char ch[] = "He7ll8O6";
    int sum = 0;
    
    printf("given string: %s\n", ch);

    for(int i = 0; ch[i] != '\0'; i++) {
        if(ch[i] >= '0' && ch[i] <= '9') {
            sum += ch[i] - '0';
        }
    }

    printf("sum of numbers in the given string: %d.\n", sum);
}