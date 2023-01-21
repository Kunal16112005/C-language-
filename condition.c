#include <stdio.h>
void main()
{
    int age;
    printf("enter the age");
    scanf("%d", &age);
    if (age <= 18)
    {
        printf("you are not drive");
    }
    else
    {
        printf("you are drive");
    }
}
