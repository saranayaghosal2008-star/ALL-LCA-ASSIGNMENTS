#include <stdio.h>
int main() {
    float weight;
    printf("Enter vehicle weight in kg:");
    scanf("%f", &weight);
    if (weight > 500) {
        printf("Access Granted:Vehicle is allowed to enter the warehouse.\n");
  }
  if (weight <=500) {
        printf("Access Denied : Vehicle is not allowed to enter the warehouse.\n");
}
return 0;
}