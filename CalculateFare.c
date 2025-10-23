/*
Name:Lenny Lepayapui
Course: Computer Science
Description:c program to calculate fare
Date:22/10/2025
*/
#include <stdio.h>

float calculatefare(float distance) {
    float fare;
//Ksh.50 per kilometer
    fare=distance*50;
    return fare;
}

int main() {
    float distance;
    printf("Enter distance travelled:");
    scanf("%f",&distance);

    printf("Tatal fare: ksh%.2f",calculatefare(distance));
    return 0;
}