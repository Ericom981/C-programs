#include <stdio.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    // Simulate occupancy using a simple pattern
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = (branch + floor + room) % 2; // 0 or 1 pattern
            }
        }
    }

    // Count occupied rooms
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);
    return 0;
}