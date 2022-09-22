#include <stdio.h>

int main() {
    char ch[] = "dog";

    int j = 0;
    while(ch[j++] != '\0');

    for(int i = j-1; i >= 0; i--)
        printf("%c",ch[i]);
}