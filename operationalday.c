#include <stdio.h>
int main() {
int day;
printf("Enter day number(1-7): ");
scanf("%d",&day);
switch(day) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Schedule Status : Full Work Day.\n");
        break;
    case 6:
        printf("Schedule Status : Half Day Weekend Schedule.\n");
        break;
    case 7:
        printf("Schedule Status : Holiday/Office Closed.\n");
        break;
    default:
        printf("Error: Invalid day entry (1-7).\n");
}
return 0;
}