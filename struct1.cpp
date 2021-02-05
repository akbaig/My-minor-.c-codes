#include <iostream>
#include <stdio.h>

using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;	
};
int main()
{
	Time time;
	printf("Enter time (format hh:mm:ss): ");
	scanf("%2d:%2d:%2d", &time.hours, &time.minutes, &time.seconds);
	long totalseconds = (time.hours*60*60) + (time.minutes*60) + time.seconds;
	printf("Total number of seconds: %ld", totalseconds);
	return 0;
}
