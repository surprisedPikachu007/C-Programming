#include <stdio.h>

#define isspecial(i) (ch == 9) || (ch == 10) || (ch == 13) || (ch[i] >= 32 && ch[i] <= 47) || (ch[i] >= 58 && ch[i] <= 64) || (ch[i] >= 91 && ch[i] <= 96)  || (ch[i] >= 123 && ch[i] <= 126)

int main() {
    char ch[] = "$(dollar)! = (rupees/75)";
    int count = 0;

    for(int i = 0; ch[i] != '\0'; i++) 
        if(isspecial(i))
            count++;

    printf("special character count: %d\n",count);
}