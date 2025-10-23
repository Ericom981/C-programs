/*Name:Eric kamau ng'ang'a
Reg. number:CT101/G/26471/25
Description conversion of degrees
*/
#include <stdio.h>

// Function prototype
float convertToCelsius(float fahrenheit);

int main(void) {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Call the function
    celsius = convertToCelsius(fahrenheit);

    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}

// Function definition
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}