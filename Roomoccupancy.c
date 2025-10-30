/*
Name:Lenny Lepayapui
Reg No :CT101/G/26444/25
course: Computer science
Dãte:27/10/2025
*/
#include <stdio.h>
int main() {



    int occupancy [5][10];
    int floor,room;
    int occupied,vacant;

    for(floor=0; floor<5; floor++) {
        for(room=0; room<10; room++) {
        }
    }

// result per floor
    for(floor=0; floor<5; floor++) {
        occupied =0;
        vacant =0;

//counting the occupied and vacant room on the floor
        for(room=0; room<10; room++) {
            if(occupancy[floor][room]==1)
                occupied ++;
            else
                vacant ++;
        }


//the results
        printf("\nFloor %d:", floor+1);
        printf("\nOccupied rooms:%d", occupied);
        printf("\nVacant rooms:%d\n",vacant);
    }
    return 0;
}