#include <stdio.h>
int main() {
    double balance = 15000.50, withdrawal;
    printf("Current balance: $%.2f\n", balance);
    printf("Enter withdrawal amount:$");
    scanf("%lf", &withdrawal);
    if (withdrawal<= balance) {
        balance -= withdrawal;
        printf("Transaction Successful! Remaining balance: $%.2f\n", balance);
    } else {
        printf("Transaction Declined! Insufficient funds available.\n");
    }
    return 0;
}

