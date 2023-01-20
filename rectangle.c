#include <stdio.h>
void main()
{
    float b, l, r, areaofrectangle, areaofcirle, primeterofrectangle, circumferenceofcircle, choice;
    printf("enter the  breadth length:");
    scanf("%f%f", &b, &l);
    printf(" enter the radius");
    scanf("%f", &r);
    printf(" 1.area of rectangle\n 2.area of circle\n 3.primetre of rectangle\n 4.circumference of circle\n ");
    scanf("%f\n", &choice);

    if (choice == 1)
    {
        printf("area of rectangle=%f/n", l * b);
    }

    else if (choice == 2)
    {
        printf("area of circle=%f\n", 3.14 * r * r);
    }
    else if (choice == 3)
    {
        printf("perimetre of rectangle=%f\n", 2 * (l + b));
    }
    else if (choice == 4)
    {
        printf("circumference of circle=%f\n", 2 * 3.14 * r);
    }
    else
    {
        printf(" invalid");
    }
}