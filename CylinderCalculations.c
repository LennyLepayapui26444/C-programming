/*
Name: Lenny Lepayapui
Reg NO:CT101/G/26444/25
Description:c program to find the radius, height, volume and surface area of a cylinder
*/

#include <stdio.h>

int main() {

    float radius;
//the radius of the cylinder
    printf("Enter the radius of the cylinder:");
    scanf("%f",&radius);

    float height;
//the height of the cylinder
    printf("Enter the height of the cylinder:");
    scanf("%f",&height);

    float volume ;
//finding the volume of the cylinder
//value of PI is 3.142
    volume=3.142*radius*radius*height;
    printf("Volume of the cylinder:%.4f\n", volume);

    float surfacearea;
//finding the surface area of a cylinder
//PI=3.142
    surfacearea=2*3.142*radius*radius+2*3.142*radius*height;
    printf("Surface area if the cylinder:%.4f", surfacearea);

    return 0;
}