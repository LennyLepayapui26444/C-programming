/*
Name:Lenny Lepayapui 
Reg No:CT101/G/26444/25
Description:C program to getting the compound interest 
Course: Computer science 
*/
#include <stdio.h>
int main() {

float principal;
//user fills the primcipal amount
printf("Emtrr the principal amount:");
scanf("%f",& principal);

float time;
//the user fills the time period 
printf("Enter the time period:");
scanf("%f",&time);

float rate;
//the user fills the rate value
printf("Enter the rate value:");
scanf("%f",&rate);

float interest;
interest =(principal + principal*rate/time*1/100);
printf("\nCompound interest=Ksh%.2f", interest);

return 0;
}