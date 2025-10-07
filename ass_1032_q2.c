#include <stdio.h>

int main() {
	float meters, centimeters;
	printf("Enter distance in meters: ");
	scanf("%f", &meters);
	centimeters = meters * 100;
	printf("%.2f meters = %.2f centimeters\n", meters, centimeters);
	return 0;
}

