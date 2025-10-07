#include <stdio.h>
int main()
{
float length, breadth, area;
	printf("Enter length and breadth of rectangle: ");
	scanf("%f %f", &length, &breadth);
	area = length * breadth;
	printf("Area = %.2f\n", area);
	return 0;
}                                                              


