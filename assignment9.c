
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    int n, i;
    float depth, pressure, temperature, battery;
    char defect[20];

    // Open file in write mode
    fp = fopen("robot.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter number of records: ");
    scanf("%d", &n);

    // Input and store robot data
    for (i = 1; i <= n; i++)
    {
        printf("\nRecord %d\n", i);

        printf("Enter depth (m): ");
        scanf("%f", &depth);

        printf("Enter pressure (MPa): ");
        scanf("%f", &pressure);

        printf("Enter temperature (C): ");
        scanf("%f", &temperature);

        printf("Enter battery percentage: ");
        scanf("%f", &battery);

        printf("Enter structural defect (None if absent): ");
        scanf("%19s", defect);

        fprintf(fp, "%.2f %.2f %.2f %.2f %s\n",
                depth, pressure, temperature,
                battery, defect);
    }

    fclose(fp);

    // Open file in read mode
    fp = fopen("robot.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    printf("\n--- UNDERWATER ROBOT INSPECTION REPORT ---\n");

    // Read and analyse stored records
    for (i = 1; i <= n; i++)
    {
        fscanf(fp, "%f %f %f %f %19s",
               &depth, &pressure, &temperature,
               &battery, defect);

        printf("\nRecord %d: ", i);

        if (depth > 300 || pressure > 30 ||
            temperature > 35 || temperature < 0 ||
            battery < 20 || strcmp(defect, "None") != 0)
        {
            printf("UNSAFE");
        }
        else
        {
            printf("SAFE");
        }
    }

    fclose(fp);

    printf("\n\nInspection completed successfully.");

    return 0;
}

