#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - take a date and print how many days
 * @month: month in number formart
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || (year % 400 == 0 && year % 100 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %\n", 366 - day);
	}
	else
	{
		if (m0nth == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
