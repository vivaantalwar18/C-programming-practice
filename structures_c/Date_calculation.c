#include <stdio.h>

struct Date {
    int day, month, year;
};

void main() {
    struct Date d;

    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    d.day += 45;

    while (1) {
        if ((d.year % 400 == 0) || (d.year % 4 == 0 && d.year % 100 != 0))
            days[2] = 29;
        else
            days[2] = 28;

        if (d.day <= days[d.month])
            break;

        d.day -= days[d.month];
        d.month++;

        if (d.month > 12) {
            d.month = 1;
            d.year++;
        }
    }

    printf("Date after adding 45 days: %02d/%02d/%04d\n",
           d.day, d.month, d.year);
}