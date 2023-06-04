#include <stdio.h>

// This program will get the circumference of a circle

int main(){

    const double PI = 3.14159; // keep this a constant as it doesn't change
    double radius;
    double circumference;
    double area; // to calculate the area

    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("circumference: %lf", circumference);
    printf("\narea: %lf", area);

    return 0;
}