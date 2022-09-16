#include <stdio.h>

void leapyear(int n) {
    /*
    
    if(n%4 == 0) {
        if(n%100 == 0) {
            if(n%400 == 0) {
                printf("%d is a leap year.\n",n);
                return;
            }
            else {
                printf("%d is not a leap year.\n",n);
                return;
            }
        }
        else 
            printf("%d is a leap year.\n",n);
    }
    else
        printf("%d is not a leap year.\n",n);
    
    */

    // better implementation
    if((n%4 == 0) && ((n%100) == (n%400)))
        printf("%d is a leap year.\n",n);
    else
        printf("%d is not a leap year.\n",n);
}

int main() {
    leapyear(1900);
    leapyear(1999);
    leapyear(2000);
}