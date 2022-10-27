#include <stdio.h>
#include <string.h>

int main() {
    char number[10];
    printf("Enter a number: ");
    scanf("%s", number);

    // print the number in words
    printf("The number in words is: ");

    char *ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *tens[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *tens_power[] = {"hundred", "thousand"};

    int len = strlen(number);

    // if the number is 0
    if (len == 1 && number[0] == '0') {
        printf("%s", ones[0]);
    }

    // if the number is greater than 0 and less than 10
    if (len == 1 && number[0] != '0') {
        printf("%s", ones[number[0] - '0']);
    }

    // if the number is 20
    if (len == 2 && number[0] == '2' && number[1] == '0') {
        printf("%s", "twenty");
    }

    // if the number is greater than 10 and less than 20
    if (len == 2) {
        if (number[0] == '1') {
            int sum = number[0] - '0' + number[1] - '0';
            printf("%s", tens[sum]);
        } 
        else if (number[0] == '2' && number[1] == '0') {
            printf("%s", "twenty");   
        }
        else {
            printf("%s ", tens_multiple[number[0] - '0']);
            printf("%s", ones[number[1] - '0']);
        }
    }

    // if the number is greater than 20 and less than 100
    if (len == 3) {
        printf("%s ", ones[number[0] - '0']);
        printf("%s ", tens_power[0]);
        if (number[1] == '1') {
            int sum = number[1] - '0' + number[2] - '0';
            printf("%s", tens[sum]);
        } else {
            printf("%s ", tens_multiple[number[1] - '0']);
            printf("%s", ones[number[2] - '0']);
        }
    }

    // if the number is greater than 100 and less than 1000
    if (len == 4) {
        printf("%s ", ones[number[0] - '0']);
        printf("%s ", tens_power[1]);
        printf("%s ", ones[number[1] - '0']);
        printf("%s ", tens_power[0]);
        if (number[2] == '1') {
            int sum = number[2] - '0' + number[3] - '0';
            printf("%s", tens[sum]);
        } else {
            printf("%s ", tens_multiple[number[2] - '0']);
            printf("%s", ones[number[3] - '0']);
        }
    }



}