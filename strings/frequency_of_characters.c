#include <stdio.h>

int main() {
    char ch[] = "Drag0nsLayer@cod.com";
    int frequencies[128] = {};

    printf("given string: %s\n", ch);

    for(int i = 0; ch[i] != '\0'; i++) {
        frequencies[ch[i]]++;
    }

    printf("frequrncy of characters: \n");
    for(int i = 0; ch[i] != '\0'; i++) {
        if(frequencies[ch[i]]) {
            printf("%c: %d\n", ch[i], frequencies[ch[i]]);
            frequencies[ch[i]] = 0;
        }
    }
}