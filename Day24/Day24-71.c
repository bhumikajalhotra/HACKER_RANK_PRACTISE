#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int day, month, year;
    int maxday;
    int leap;
    
    scanf("%d %d %d", &day, &month, &year);
    
    if (year % 400 == 0)
    {
        leap = 1;
    }
    else if (year % 100 == 0)
    {
        leap = 0;
    }
    else if(year % 4 == 0)
    {
        leap = 1;
    }
    else
    {
        leap = 0;
    }
    
    if (month == 2)
    {
        if(leap == 1)
        {
            maxday = 29;
        }
        else
        {
            maxday = 28;
        }
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        maxday = 30;
    }
    else
    {
        maxday = 31;
    }
    
    if (day < maxday)
    {
        ++day;
    }
    else
    {
        day = 1;
        if (month < 12)
        {
            ++month;
        }
        else
        {
            month = 1;
            ++year;
        }
    }
    
    if (day < 10)
    {
        printf("0");
    }
    printf("%d-", day);
    
    if (month < 10)
    {
        printf("0");
    }
    printf("%d-", month);
    
    printf("%d\n", year);
    
    return 0;
}

// If-Else_Next-Day Date Calculator