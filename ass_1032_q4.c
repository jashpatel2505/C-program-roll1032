#include <stdio.h>
int main() {
	float length, breadth, perimeter;
	printf("Enter length and breadth of rectangle: ");
	scanf("%f %f", &length, &breadth);
	perimeter = 2 * (length + breadth);
	printf("Perimeter = %.2f\n", perimeter);
	return 0;
}

