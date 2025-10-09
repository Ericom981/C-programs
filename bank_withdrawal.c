/*Name:Eric kamau ng'ang'a
Reg. number:CT101/G/26471/25
Description;count 100 to 50 in descending
*/

#include <stdio.h>
int main() {
    int bank_balance, withdraw_amount;

    printf("Enter your bank balance:\n");
    scanf("%d", &bank_balance);

    while (bank_balance > 0) {
        printf("Enter amount to withdraw:\n");
        scanf("%d", &withdraw_amount);

        while (withdraw_amount > bank_balance) {
            printf("Insufficient funds in your bank account\n");
            scanf("%d", &withdraw_amount);
        }

        bank_balance = bank_balance - withdraw_amount;
        printf("Balance remaining: %d\n", bank_balance);
    }

    printf("Balance is 0. No more withdrawals.\n");
    if (bank_balance==0);
    return 0;
}