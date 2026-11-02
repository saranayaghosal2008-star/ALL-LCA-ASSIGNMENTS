#include <stdio.h>
int main() {
    int age;
    printf("Enter applicant age: ");
    scanf("%d", &age);
    if (age>= 18) {
        printf("Eligibilty Verified: Applicant is qualified for full time processing.\n");
    } else {
        printf("Ineligible: Applicant must be atleast 18 years old.\n");
    }
    return 0;
}
