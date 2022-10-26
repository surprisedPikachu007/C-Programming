#include <stdio.h>

int main() {
    char ch[] = "He7ll14O6"; // sum_of_digits of single digits
    int sum_of_digits = 0;

    printf("given string: %s\n", ch);

    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] >= '0' && ch[i] <= '9') {
            sum_of_digits += ch[i] - '0';
        }
    }

    printf("sum of single digits in the given string: %d.\n", sum_of_digits);

    int sum_of_numbers = 0;

    for (int i = 0; ch[i] != '\0'; i++) {
        int sum = 0;
        while (ch[i] >= '0' && ch[i] <= '9') {
                sum *= 10;
                sum += ch[i] - '0';
                i++;
            }
        sum_of_numbers += sum;
    }

    printf("sum of whole numbers in the given string: %d.\n", sum_of_numbers);
}