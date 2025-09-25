/*
Name:Lenny Lepayapui
Reg NO:CT101/G/26444/25
Description:C program to find the simple interest
Course: Computer science
*/
#include <stdio.h>
int main() {

    float principalamount;
//user fills their principal amount
    printf("Enter the principal amount:");
    scanf("%f",&principalamount);

    float time;
//user fliis their time period
    printf("Enter the time period:");
    scanf("%f",&time);

    float rate;
//user fills the rate
    printf("Enter the rate:");
    scanf("%f",&rate);


    float interest;
//finding the simple interest
    interest = (principalamount * time * rate)/100;
    printf("simple interest = %.2f", interest);

    return 0;
}