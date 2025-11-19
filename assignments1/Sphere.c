#include <stdio.h>
#define PI 3.1415

double surface_area(double radius) {
    return 4 * PI * radius * radius;
}

int main() {
    double r, area;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &r);

    area = surface_area(r);

    printf("Surface area of the sphere = %.2lf\n", area);

    return 0;
}
