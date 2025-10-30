#include <stdio.h>

int main() {
    int occupancy[5][10];
    int i, j, occupied, vacant;

    // Input occupancy for 5 floors
    for (i = 0; i < 5; i++) {
        printf("\nEnter occupancy for Floor %d (1 = occupied, 0 = vacant):\n", i + 1);
        for (j = 0; j < 10; j++) {
            printf("Room %d: ", j + 1);
            scanf("%d", &occupancy[i][j]);

            // Optional: validate input
            if (occupancy[i][j] != 0 && occupancy[i][j] != 1) {
                printf("Invalid entry! Please enter 1 or 0.\n");
                j--; // repeat for same room
            }
        }
    }

    printf("\n--- Room Occupancy Report ---\n");

    // Count and display occupancy per floor
    for (i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d → Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }

    return 0;
}