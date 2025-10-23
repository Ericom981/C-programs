/*Name:Eric kamau ng'ang'a
Reg. number:CT101/G/26471/25
Description calacute_fare
*/
#include <stdio.h>

// Function prototype
float calculateFare(float distance);

int main(void) {
    float distance, fare;

    printf("Enter the distance traveled (in km): ");
    scanf("%f", &distance);

    fare = calculateFare(distance);  // call the function

    printf("Total fare = KSh. %.2f\n", fare);
    return 0;
}

// Function definition
float calculateFare(float distance) {
    float fare;
    fare = distance * 50;
    return fare;
}