#include "main.h"
/**
 * convert_day - converts day of month to day of year, without accounting
 * for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */
int convert_day(int month, int day, int year)
{
	int days_in_feb = 28;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		days_in_feb = 29;
	}

	switch (month)
	{
		case 2:
			day = 31 + day;
			break;
		case 3:
			day = 31 + days_in_feb;
			break;
		case 4:
			day = 62 + days_in_feb;
			break;
		case 5:
			day = 92 + days_in_feb;
			break;
		case 6:
			day = 123 + days_in_feb;
			break;
		case 7:
			day = 153 + days_in_feb;
			break;
		case 8:
			day = 184 + days_in_feb;
			break;
		case 9:
			day = 215 + days_in_feb;
			break;
		case 10:
			day = 246 + days_in_feb;
			break;
		case 11:
			day = 276 + days_in_feb;
			break;
		case 12:
			day = 306 + days_in_feb;
			break;
	}
	return (day);
}
