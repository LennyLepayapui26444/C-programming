/*
Name: Lenny Lepayapui
Reg NO: CT101/G/26444/25
Description: c programming for number guessing game
Date: 08/10/2025
*/
#include <stdio.h>
int main() {
    int  password ;
    password =1234;

    do {
        printf("\nEnter password:");
        scanf("%d", &password);

        if(password<=1233) {
            printf("\nIncorrect password. Try again");
        }
        if(password>=1235) {
            printf("\nIncorrect password. Try again");
        }
        if( password==1234) {
            printf("Access Granted");
        }
    } while (password=1234);

    return 0;
}