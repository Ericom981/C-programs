/*Name:Eric kamau ng'ang'a
Reg. number:CT101/G/26471/25
Description calacute_fare
*/

#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0, average;
    int i;

    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
    }

    for (i = 0; i < 7; i++) {
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}