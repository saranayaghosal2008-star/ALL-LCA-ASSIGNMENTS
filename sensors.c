#include <stdio.h>
#include <string.h>
struct Sensor {
int id;
char type[20];
float value, min, max;
char status[10];
};
int main() {
int n, i, abnormal = 0;
struct Sensor s[10];
printf("Enter number of sensors: ");
scanf("%d", &n);
if (n < 1 || n > 10) {
 printf("Please enter between 1 and 10 sensors.\n");
  return 1;
  }
for ( i = 0; i < n; i++) {
printf("\nEnter ID: "); scanf("%d", &s[i].id);
printf("Enter Type: "); scanf("%19s", s[i].type);
printf("Enter Value: "); scanf("%f", &s[i].value);
printf("Enter Min Limit: "); scanf("%f", &s[i].min);
printf("Enter Max Limit: "); scanf("%f", &s[i].max);
 float lower = s[i].min - (0.10 * s[i]. min);
 float upper = s[i].max + (0.10 * s[i].max);
 if (s[i].value >= s[i].min && s[i].value <= s[i].max) {
  strcpy(s[i]. status, " Normal"); 
  }
  else if ( s[i].value >= lower && s[i].value <= upper) {
   strcpy(s[i].status, "Warning");
   abnormal++;
   }
   else {
     strcpy(s[i].status, "Anomaly");
     abnormal++;
    }
   }
     printf("\n--- Sensor Report ---\n");
     printf("%-8s %15s %-10s %-20s %-10s\n",
           "ID", "Type", "Value", "Range", "Status");
     for ( i = 0; i < n; i++) {
      printf("%-8d %-15s %-10.2f %.2f to %.2f  %-10s\n",
          s[i].id, s[i].type, s[i].value, s[i].min, s[i].max, s[i].status);
      }
      printf("\nTotal Abnormal Sensors: %d\n", abnormal);
      return 0;
      }
     
     
          
