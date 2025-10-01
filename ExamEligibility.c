/*
Ñame:Lenny Lepayapui 
Reg NO:CT101/G/26444/25
Description:C program to get student's eligibility for the final exam
Date:10/01/2025
*/

#include <stdio.h>
int main(){

float attendance;
//the student fills the attendance 
printf("Enter attendance:");
scanf("%f",& attendance);


float marks;
//the student fills the average marks
printf("\nEnter the average marks:");
scanf("%f", &marks);


if(attendance>=75 && marks>=40){
printf("\nEligible for final exam");
} else
printf("\nNot eligible");

return 0;
}