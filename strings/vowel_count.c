#include <stdio.h>

#define isvowel(i) ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' || ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' 

int main() {
    char ch[] = "notebook";
    int count = 0;
    
    for(int i = 0; ch[i] != '\0'; i++)
        if(isvowel(i))
            count++;

    printf("vowel count = %d\n",count);
}