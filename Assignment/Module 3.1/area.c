#include <stdio.h>
int main()
{
    float length, width, area_of_rectengle;
    printf("        Area of Rectengle       \n");
    printf("Please enter the length and Width of area : ");
    scanf("%f %f", &length, &width);
    area_of_rectengle = length * width;
    printf("your area is %f\n", area_of_rectengle);
    printf("\n\n");
    printf("        Area of Trigle       \n");
    float hight, base, area_of_trigle;
    printf("Enter a hight and base : ");
    scanf("%f %f", &hight, &base);
    area_of_trigle = (hight * base) / 2;
    printf("your area is %f\n", area_of_trigle);
    printf("\n\n");
    printf("        Area of Cricle       \n");
    float area_of_cricle, radius;
    printf("Enter a radius : ");
    scanf("%f", &radius);
    area_of_cricle = 3.14 * (radius * radius);
    printf("your area is %f", area_of_cricle);

    return 0;
}
