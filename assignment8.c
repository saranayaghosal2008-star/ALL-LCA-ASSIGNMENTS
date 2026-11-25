#include <stdio.h>
void swap (int*a, int*b) {
int temp = *a;
*a = *b;
*b = temp;
}
int main () { 
 int motor1, motor2; 
  int *p1, *p2;
 printf(" Enter spped of Motor 1 :  ");
 scanf("%d",&motor1);
 printf(" Enter speed of Motor 2: ");
 scanf("%d",&motor2);
  p1 = &motor1;
  p2 = &motor2;
 printf("\n Before Swapping :\n");
 printf("Motor 1 speed: %d RPM\n",motor1);
 printf("Motor 2 speed : %d RPM\n",motor2);
 printf("Address of Motor 1: %p\n", (void *)p1);
 printf("Address of Motor 2: %p\n", (void *) p2);
 swap(p1, p2);
 printf("\n---- After Swapping ----\n");
 printf("Motor 1 Speed: %d RPM\n",motor1);
 printf(" Motor 2 Speed : %d RPM\n",motor2);
 printf("Address of Motor 1: %p\n", (void*)p1);
 printf("Address of Motor 2: %p\n", (void*)p2);
 return 0;
 } 
