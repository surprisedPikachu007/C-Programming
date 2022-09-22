#include <stdio.h>

int main() {
    char ch1[] = "hello"; // initialize without  '\0'
    char ch2[] = {'h','e','l','l','o','\0'}; // initialize with '\0'

    // size
    printf("ch1: %d bytes\n",sizeof(ch1));
    printf("ch2: %d bytes\n\n",sizeof(ch2));    

    // modify values
    ch1[0] = 'b';
    ch2[0] = 'b';
    printf("ch1: %s\n",ch1);
    printf("ch2: %s\n\n",ch2);
    
    // cannot re-assign values
    //ch1 = "mello";  // produces error: assignment to expression with array type
    //ch2 = "mello";  // produces error: assignment to expression with array type

    // getting string input
    char ch3[50];
    scanf("%s",ch3); // no need for &, since ch3 is a pointer
    printf("ch3: %s\n\n",ch3);

    // input with delimiters 
    // input terminates when a delimiter is encountered, e.g. \n, q etc.
    //getchar(); // to make sure the next scanf works sice th e\n from the previous scanf terminates this scanf.
    char ch4[50];
    scanf("%[^\n]s",ch4);  // \n is not stored in string. instead it is stored in a buffer
    printf("ch4: %s\n\n",ch4);
}