#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void add_time(int days, int hours, int minutes) 
{
    time_t current_time = time(NULL);
    struct tm *tm_info = localtime(&current_time);
    tm_info->tm_mday += days;
    tm_info->tm_hour += hours;
    tm_info->tm_min += minutes;
    mktime(tm_info);
    printf("auction time: %d-%02d-%02d %02d:%02d:%02d\n",
           tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday,
           tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);
}

int main() 
{
    do
    {
        int days = 0, hours = 0, minutes = 0;

        printf("input days: ");
        scanf("%d",&days);
        if (days == 114514) 
        {
            printf("Good Luck!");
            break;
        } 
        printf("input hours: ");
        scanf("%d",&hours);
        printf("input minutes: ");
        scanf("%d",&minutes);
        add_time(days, hours, minutes);
    }while (1);
    
}
