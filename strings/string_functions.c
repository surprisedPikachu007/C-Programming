#include <stdio.h>
#include <string.h> // includes string function like strlen, strcpy etc.

int main() {
    // strlen - length of a string
    char ch1[] = "hello";
    printf("length of ch: %d\n",strlen(ch1));

    // strcpy - copy string
    char ch2[] = "";
    strcpy(ch2,ch1);
    printf("ch2: %s\n",ch2);

    // strcat - concatenate two strings
    char a[50] = "hello, ";
    char b[50] = "world!";
    char c[50] = "";
    strcat(c,strcat(a,b)); // strcpy(c,strcat(a,b)) would work too
    printf("c: %s\n",c);

    // strcmp - compare two strings 0 - equal, otherwise - difference of ascii value
    char ch3[] = "hello";
    char ch4[] = "Hello";
    char ch5[] = "hello";
    char ch6[] = "ello";

    printf("%s == %s = %d\n", ch3, ch5, strcmp(ch3,ch5));
    printf("%s == %s = %d\n", ch3, ch4, strcmp(ch3,ch4));
    printf("%s == %s = %d\n", ch4, ch3, strcmp(ch4,ch3));
    printf("%s == %s = %d\n", ch3, ch6, strcmp(ch3,ch6));    
}