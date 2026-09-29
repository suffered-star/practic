#include <stdio.h>

#define SECONDS_IN_HOUR 3600
#define HOURS_IN_DAY 24
#define DAYS_IN_YEAR 365

int main() {
    int age_years = 18;

    int total_days  = age_years * DAYS_IN_YEAR;
    int total_hours = total_days * HOURS_IN_DAY;
    int total_ticks = total_hours * SECONDS_IN_HOUR;

    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n",
           total_ticks, total_hours, total_days, age_years);

    return 0;
}