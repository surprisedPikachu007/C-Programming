#include <stdio.h>

int main() {
    char str[100], sub_str[100], new_str[100];
    printf("Enter string: ");
    scanf("%s",str);
    printf("Enter String to be replaced: ");
    scanf("%s",sub_str);
    printf("Enter new String: ");
    scanf("%s", new_str);

    // replace all occurences of sub_str with new_str
    int i = 0, j = 0, k = 0;
    while(str[i] != '\0') {
        if(str[i] == sub_str[j]) {
            j++;
            if(sub_str[j] == '\0') {
                // replace sub_str with new_str
                for(int l = 0; new_str[l] != '\0'; l++) {
                    str[i-j+l+1] = new_str[l];
                }
                i = i-j+1;
                j = 0;
            }
        } else {
            j = 0;
        }
        i++;
    }

    printf("New string: %s", str);
}