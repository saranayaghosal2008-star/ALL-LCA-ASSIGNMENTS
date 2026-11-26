
#include <stdio.h>

int main()
{
    int year, month, days, start, i, j;

    printf("Enter year: ");
    scanf("%d", &year);

    // Find the starting day of the year
    start = (year - 1 + (year - 1)/4 - (year - 1)/100 + (year - 1)/400) % 7;

    for(month = 1; month <= 12; month++)
    {
        switch(month)
        {
            case 1: printf("\n\nJanuary"); days = 31; break;
            case 2: printf("\n\nFebruary"); 
                    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                        days = 29;
                    else
                        days = 28;
                    break;
            case 3: printf("\n\nMarch"); days = 31; break;
            case 4: printf("\n\nApril"); days = 30; break;
            case 5: printf("\n\nMay"); days = 31; break;
            case 6: printf("\n\nJune"); days = 30; break;
            case 7: printf("\n\nJuly"); days = 31; break;
            case 8: printf("\n\nAugust"); days = 31; break;
            case 9: printf("\n\nSeptember"); days = 30; break;
            case 10: printf("\n\nOctober"); days = 31; break;
            case 11: printf("\n\nNovember"); days = 30; break;
            case 12: printf("\n\nDecember"); days = 31; break;
        }

        printf("\nSun Mon Tue Wed Thu Fri Sat\n");

        for(i = 0; i < start; i++)
            printf("    ");

        for(j = 1; j <= days; j++)
        {
            printf("%3d ", j);

            if((j + start) % 7 == 0)
                printf("\n");
        }

        start = (start + days) % 7;
    }

    return 0;
}

