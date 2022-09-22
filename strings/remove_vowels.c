#include <stdio.h>

int main() {
    char ch[] = "playground";
    printf("string: %s\n",ch);

    for(int i = 0; ch[i] != '\0'; i++) {
        if(ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' || ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u') {
            for(int j = i; ch[j] != '\0'; j++) {
                ch[j] = ch[j+1];
            }
            i--;  // to negate i++ in the for loop so the new ith element is not skipped
        }
    }

    printf("without vowels: %s",ch);
}