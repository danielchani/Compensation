#include <stdio.h>
void main()
{
	double kmh, d, t, m;
	printf("Enter distance from cityA to cityB in KM: \n");
	scanf_s("%lf", &d);
	printf("Enter your speed in KMH: \n");
	scanf_s("%lf", &kmh);
	t = d / kmh;
	m = t / 60;
	printf("You arrived in %.0lf hours and %lf minutes\n", t, m);
}