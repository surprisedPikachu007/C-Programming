#include <stdio.h>

int main() {
    char ch[] = "Drag0nsLayer@cod.com";
    int frequencies[128] = {};

    printf("given string: %s", ch);

    for(int i = 0; ch[i] != '\0'; i++) {
        frequencies[ch[i]]++;
    }

    printf("frequrncy of characters: \n");
    for(int i = 0; i < 128; i++) {
        if(frequencies[i]) {
            printf("%c: %d\n", i, frequencies[i]);
        }
    }
}