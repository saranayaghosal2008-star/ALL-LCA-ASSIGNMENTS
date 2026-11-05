#include <stdio.h>
int main() {
    int choice;
    double balance = 5000.00,amount;
    printf("--- ATM MAIN MENU ---\n");
    printf("1.Check Balance\n2.Deposit Funds\n3.Withdraw Funds\n4.Exit\n");
    printf("Enter choice(1-4): ");
    scanf("%d",&choice);
    switch (choice){ 
        case 1:
            printf("Current Balance: $%.2f\n",balance);
            break;
        case 2:
        printf("Enter deposit amount: $");
        scanf("%lf",&amount);
            balance += amount;
            printf("Updated Balance: $%.2f\n",balance);
            break;
        case 3:
        printf("Enter withdrawal amount: $");
        scanf("%lf",&amount);
            if(amount <= balance) {
                balance -= amount;
                printf("Please collect cash. Remaining Balance: $%.2f\n",balance);
            } else {
                printf("Error: Insufficient Funds.\n");
            }
            break;
        case 4:
        printf("Thank you for using our banking services. Goodbye!\n");
            break;
            default:
            printf("Error: Invalid option selected.\n");
        }
        return 0; 
    }
    