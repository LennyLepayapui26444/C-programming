/*
Name:Lenny Lepayapui
Reg NO:CT101/G/26444/25
Description:Bank offer to customer's loans
*/

#include <stdio.h>
int main() {
    int age;
//user fills the age printf("Enter your age:");
    printf("Enter your age:");
    scanf("%d",&age);

    float income;
//user fills the annual income
    printf("Enter your annual income:");
    scanf("%f",&income);

// expected output
    if(age>=21 & income >=21000) {
        printf("Congratulations you qualify for a loan.\n");

    } else {
        printf("Unfortunately,we are unable to offer you a loan at this time. ");
    }
    return 0;
}