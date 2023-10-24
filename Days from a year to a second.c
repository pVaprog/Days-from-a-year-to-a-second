#include <stdio.h>
#include <math.h>

int main()
{
	float count_day;
	int year, month, week, day;
	float hour, min, sec;

	scanf("%f", &count_day);


	hour = fmod(count_day, 1);
	count_day -= hour;
	year = (count_day - hour) / 365;
	printf("%d year ", year);
	month = count_day - year * 365;
	printf("%d month ", month / 30);
	week = month - 30 * (month / 30);
	printf("%d week ", week / 7);
	day = week - 7 * (week / 7);
	printf("%d day ", day);
	hour *= 24;
	printf("%d hour ", (int)hour);
	min = fmod(hour, 1) * 60;
	printf("%d min ", (int)min);
	sec = fmod(min, 1 * 60);
	printf("%d sec ", (int)sec);

	return 0;
}