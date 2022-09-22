#include <stdio.h>

int main() {
    char ch[] = "hELlo";

    for(int i = 0; ch[i] != '\0'; i++) {
        if(ch[i] >= 'a' && ch[i] <= 'z')
            ch[i] -= 32;
        else if(ch[i] >= 'A' && ch[i] <= 'Z')
            ch[i] += 32;
    }

    printf("toggled string: %s\n",ch);
}