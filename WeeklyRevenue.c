/*
Name:Lenny Lepayapui
Reg No :CT101/G/26444/25
course: Computer science
Dãte:27/10/2025
*/
#include <stdio.h>
int main() {
    float revenue[7],tatal=0, average ;
    int i;

//input revenue for the week
    for(i=0; i<7; i++) {
        printf("Enter revenue for the day %d:",i+1);
        scanf("%f",& revenue[i]);
        tatal+=revenue[i];
    }

//calculating the average
    average =tatal/7;

    printf("\nTatal weekly revenue: %.2f",tatal);
    printf("\nAverage daily revenue: %.2f", average);

    return 0;
}