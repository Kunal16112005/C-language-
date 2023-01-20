#include <stdio.h>
void main()
{
    float n1, n2, add, sub, division, mul, choice;

    printf("enter the number");
    scanf("%f%f", &n1, n2);
    printf("1.add\n,2.sub,3.mul,4.division");
    scanf("%f", choice);
    if (choice == 1)
    {
        printf("add:%f\n", n1 + n2);
    }
    else if (choice == 2)
    {
        printf("sub:%f\n", n1 - n2);
    }
    else if (choice == 3)
    {
        printf("mul:%f\n", n1 * n2);
    }
    else if (choice == 4)
    {
        printf("division:%f\n", n1 / n2);
    }
    else
    {
        printf("world is invaild");
    }
}