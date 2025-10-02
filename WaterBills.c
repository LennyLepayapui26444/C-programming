/*
Name:Lenny Lepayapui
Reg NO:CT101/G/26444/25
Description:C program to display the tatal water bills
Date:10/02/2025
*/
#include <stdio.h>
int main() {

    int units;
//the user is prompted to fill the number of weter unit comsumed
    printf("Enter the number of water units comsumed:");
    scanf("%d",& units);

    float bill;
//to calculate the tatal bills
    if(units<=30) {
        bill=units*20;
    }
    else if(units>=31 && units<=60) {
        bill=units*25;
    }
    else if(units>60) {
        bill=units*30;
    }

//the tatal bills are displayed for the user
    printf("Tatal weter bills:%.2fKES",bill);

    return 0;
}