/*
Name: Lenny Lepayapui
Reg NO: CT101/G/26444/25
Description: c programming for number guessing game
Date: 08/10/2025
*/
#include <stdio.h>
int main() {
    int secretnumber,guess, attempts=0;
//the secret number
    secretnumber=11;

//the loop
    do {
        printf("Enter you guess:");
        scanf("%d",&guess, attempts++);

        if(guess>secretnumber) {
            printf("Too high\n");
        } else if(guess<secretnumber) {
            printf("Too low\n");
        } else if(guess=secretnumber) {
            printf("Congratulations\n");
            printf("Number of attempts:%d\n", attempts);
        }
    } while (guess=secretnumber);
    return 0;
}