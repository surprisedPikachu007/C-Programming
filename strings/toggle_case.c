#include <stdio.h>

int main() {
    char ch[] = "hELlo";

    /* Here is the explanation for the code above:
    1. We create a loop that will run from 0 to the length of the string.
    2. If the character at index i is a lowercase letter, we subtract 32 to convert it to uppercase.
    3. If the character at index i is an uppercase letter, we add 32 to convert it to lowercase.
    4. We display the changed string. */

    for(int i = 0; ch[i] != '\0'; i++) {
        if(ch[i] >= 'a' && ch[i] <= 'z')
            ch[i] -= 32;
        else if(ch[i] >= 'A' && ch[i] <= 'Z')
            ch[i] += 32;
    }

    printf("toggled string: %s\n",ch);
}