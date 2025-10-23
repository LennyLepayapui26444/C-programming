/*
Name :Lenny Lepayapui 
Course: Computer Science 
Description:c program to calculate bills
Date:22/10/2025
*/
#include <stdio.h>
float calculateElectricBill(float units){
float bill;
if(units<=100){
bill=units*10;
}
else if(units<=200){
bill=(100*10)+(units-100)*15;
}
else{
bill=(100*10)+(100*15)+((units-200)*20);
}
return bill;
}

int main(){
int units;
printf("Enter number of units consumed :");
scanf("%d",& units);

printf("Tatal bill amount : Ksh. %.2f", calculateElectricBill(units));

return 0;
}