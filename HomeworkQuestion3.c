#include <stdio.h>
int main()
{
	long id;
	printf("Enter Your ID: \n");
	scanf_s("%ld", &id);
	double HourWage;
	printf("Enter your wage per hour: \n");
	scanf_s("%lf", &HourWage);
	int days, yof, yoe, hours;
	printf("Enter your shift hours per day:\n");
	scanf_s("%d", &hours);
	printf("Enter amount of days you worked per week: \n");
	scanf_s("%d", &days);
	printf("Enter year of employment: \n");
		scanf_s("%d", &yoe);
		printf("Enter year of Dismissal: \n");
		scanf_s("%d", &yof);
		double Compensation;
		Compensation = (HourWage * hours) * (days * 4) * (yof - yoe);
		printf("Your Compensation: %.2lf  Your ID: %ld\n", Compensation, id);
		return 0;
}