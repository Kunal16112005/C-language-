#include <stdio.h>
void main()
{
    float kilometre, metre, feet, centi, inch;
    printf("enter the kilometre");
    scanf("%f", &kilometre);
    metre = kilometre * 1000;
    feet = kilometre * 3280;
    centi = kilometre * 39370.079;
    inch = kilometre * 100000;

    printf("%f\n %f\n %f\n %f\n ", metre, feet, centi, inch);
}