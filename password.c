/*Name:Eric kamau ng'ang'a
Reg. number:CT101/G/26471/25
Description password
*/
#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234)
            printf("Wrong password! Try again.\n");

    } while (password != 1234);

    printf("Access Granted\n");

    return 0;
}