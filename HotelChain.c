/*
Name:Lenny Lepayapui
Reg No :CT101/G/26444/25
course: Computer science
Dãte:27/10/2025
*/
#include <stdio.h>
int main() {
    int branches=3;
    int floors=5;
    int rooms=10;

    int chain[branches][floors][rooms];
    int tataloccupied=0;


    for(int b=0; b<branches; b++) {
        for(int f=0; f<floors; f++) {
            for(int r=0; r<rooms; r++) {
                tataloccupied +=chain[b][f][r];
            }
        }
    }

    printf("Tatal number of rooms across all branches:",);

    return 0;
}