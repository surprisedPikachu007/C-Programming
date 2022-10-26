#include <stdio.h>

int to_digit(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
int main() {
    char roman[10];
    int integer = 0;

    printf("Enter a roman numeral: ");
    scanf("%s", roman);

    int i = 0;

    while(roman[i] != '\0') {
        if(to_digit(roman[i]) >= to_digit(roman[i+1])) {
            integer += to_digit(roman[i]);
        } else {
            integer += to_digit(roman[i+1]) - to_digit(roman[i]);
            i++;
        }
        i++;
    }

    printf("%s = %d", roman, integer);
}