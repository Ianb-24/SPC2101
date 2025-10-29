/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A C function for a Hotel Management System: 
            3D Array- Multiple Branches
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
//3D Array Declaration 
    int chain[3][5][10];
    int totalOccupied = 0;

    srand(time(NULL)); // Assignment of Random Occupancy to each room

    for(int branch = 0; branch < 3; branch++) {
        for(int floor = 0; floor < 5; floor++) {
            for(int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if(chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }
    
//Total Number of occupied rooms across all branches 
    printf("Occupied rooms across all branches is: %d", totalOccupied);

    return 0;
}