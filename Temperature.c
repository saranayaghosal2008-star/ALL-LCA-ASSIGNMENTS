#include <stdio.h>
int main() {
    float temperature;
    printf("Enter current server room temperature (°C): ");
    scanf("%f", &temperature);
    if (temperature>35.0) {
        printf("CRITICAL ALARM: Server room temperature too high! Initiating cooling fans.\n");
    } else{
        printf("STATUS OK: Temperature is within optimal operating limits.\n");
    }
    return 0;
    } 