i/*Name:Eric kamau ng'ang'a
Reg. number:CT101/G/26471/25
Description;guess number game
*/

#include <stdio.h>

int main() {
    int secret = 7;   // fixed secret number
    int guess;
    int attempts = 0; // counter

    while (1) {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        attempts++;   // increase count each time

        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else {
            printf("Congratulations!\n");
            printf("You took %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}
