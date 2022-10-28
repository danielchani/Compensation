#include <stdio.h>
int main()
{
	double PriceA, PriceB, Price; int QuantityA, QuantityB;
	printf("Enter quantity of item A: \n");
	scanf_s("%d", &QuantityA);
	printf("Enter price of itemA: \n");
	scanf_s("%lf", &PriceA);
	printf("Enter quantity of item B: \n");
		scanf_s("%d", &QuantityB);
		printf("Enter price of ItemB: \n");
			scanf_s("%lf", &PriceB);
			Price = ((PriceA * QuantityA) + (PriceB * QuantityB)) / (QuantityA + QuantityB);
			printf("You paid in average:  %lf NIS per Item", Price);


}