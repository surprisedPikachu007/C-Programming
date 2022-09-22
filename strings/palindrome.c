#include <stdio.h>
#include <string.h>

int main() {
    char ch[] = "malayalam";

    int j = 0;
    while(ch[j] != '\0') j++;
    j--;

    int i = 0;
    while(i<=j) {
        if(ch[i] != ch[j]) {
            printf("%s is not a palindrome.\n",ch); 
            return 0;         
        }
        i++;
        j--;
    }

    printf("%s is a palindrome.\n",ch);       
}