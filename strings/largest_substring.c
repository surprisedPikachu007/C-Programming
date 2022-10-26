#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);

    int count = 0;
    for(int i = 0; i < length; i++) {
        if(str[i] == '0')
            count++;
    }

    if(count < 2) {
        printf("does not contain a substring.\n");
        return 0;
    }

    for(int i = 0; i < length; i++) 
        if(str[i] == '0')
            str[i] = '\0';

    int max = 0 ,max_str = -1;
    for(int i = 0; i < length; i++) {
        if(str[i] == '\0') {
            str[i] = '0';
            if(strlen(&str[i]) > max) {
                max = strlen(&str[i]) + 1; // to compensate for the '\0' which is not counted in strlen
                max_str = i;
            }
        }
    }

    printf("max sub string: ");
    for(int i = 0; i < max; i++) {
        printf("%c", str[max_str+i]);
    }
    printf('\n');
}