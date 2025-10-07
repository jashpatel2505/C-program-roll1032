#include <stdio.h>
int main() {
    float miles, kilometers;
    printf("Enter distance in miles: ");
    scanf("%f", &miles);
    kilometers = miles * 1.60934;
    printf("%.2f miles = %.2f kilometers\n", miles, kilometers);
    return 0;
}
