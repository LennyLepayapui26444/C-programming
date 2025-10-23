/*
Name:Lenny Lepayapui
Course: Computer Science
Description:c program to calculate fare
Date:22/10/2025
*/
#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    float celsius;
//convert to celcius
    celsius=(fahrenheit-32)*5/9;
    return celsius;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fahrenheit);

    printf("Temperature in celsius :%.2f\n", convertToCelsius(fahrenheit));
    return 0;
}