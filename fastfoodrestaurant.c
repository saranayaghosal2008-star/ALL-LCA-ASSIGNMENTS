#include <stdio.h>
int main() {
    int item_code;
    printf("--- FAST FOOD MENU ---\n1. Cheeseburger($5.99)\n2. Veggie Pizza ($8.50)\n3. Chicken Nuggets($4.25)\n4.Soft Drink($1.50)\n");
    printf("Select item code (1-4): ");
    scanf("%d",&item_code);
    switch (item_code) {
        case 1: 
        printf("Order Placed: Cheeseburger. Total : $5.99\n");
        break;
        case 2:
        printf("Order Placed: Veggie Pizza. Total : $8.50\n");
        break;
        case 3:
        printf("Order Placed: Chicken Nuggets. Total : $4.25\n");
        break;
        case 4:
        printf("Order Placed: Soft Drink. Total : $1.50\n");
        break;
        default:
        printf("Error: Invalid food menu selection.\n");
}
return 0;
} 