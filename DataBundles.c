/*
Name:Lenny Lepayapui
Reg NO:CT101/G/26444/25
Description:C program for mobile data bundles purchased
Date:10/01/2025
*/


#include <stdio.h>
int main() {

    printf("Option     Bundle     Cost(KES)\n");
    printf("1          100MB      50\n");
    printf("2          500MB      200\n");
    printf("3          1GB        350\n");
    printf("4          2GB        600\n");

    int choice;
//user makes a choice
    printf("\nEnter your choice:");
    scanf("%d",&choice);


//switch statement
    switch (choice) {
    case 1:
        printf("\nYou have selected:100MB,cost=50KES");
        break;
    case 2:
        printf("\nYou have selected:500MB,cost=200KES");
        break;
    case 3:
        printf("\nYou have selected:1GB,cost=300KES");
        break;
    case 4:
        printf("\nYou have selected:2GB,cost=600KES");
        break;
    default:
        printf("\nInvalid choice");
    }
    return 0;
}