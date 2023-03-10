#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and prints how many dates are
 * left in the year, taking the year into account
 * @month: Month in number format
 * @day: Day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	{
	if (month >= 3 && day >= 60)
	{
	day++;
	}
	printf("Day of the year: %d\n", day);
	printf("Remaining days:%d\n", 366 - day);
	}
	else
	{
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 365 - day);
	}
}

