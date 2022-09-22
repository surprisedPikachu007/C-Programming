#include <stdio.h>

int main() {
    char ch[] = "$(dollar)! = (rupees/75)";
    int count = 0;

    for(int i = 0; ch[i] != '\0'; i++) 
        if((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= '0' && ch[i] <= '9'))
            continue;
        else
            count++;

    printf("special character count: %d\n",count);
}