#include <stdio.h>
int main() {
    float water_percentage;
    printf("Enter current water tank level(%%): ");
    scanf("%f", &water_percentage);
    if (water_percentage<20.0) {
        printf("ALERT: Low water level! Activating motor pump.\n");
    } else {
        printf("Status: Adequate water level. Motor pump deactivated.\n");
    }
    return 0;
    }
