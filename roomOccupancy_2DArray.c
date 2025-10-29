/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A C function for a Hotel Management System: 
            2D Array- Room Occupancy(One Branch)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
// 2D Array Declaration 
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(NULL)); // Input Random Occupancy Data

    for(int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for(int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d:\n Occupied = %d\n, Vacant = %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}