#include <stdio.h>
void main()
{
    float n1, n2, n3, n4, add, avarage, opt;
    printf("enter the number");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    printf("1.add\n2.average\n");
    scanf("%f", &opt);
    if (opt == 1)
    {
        printf("add %f", n1 + n1 + n3 + n4);
    }
    else if (opt == 2)
    {
        printf("average %f", (n1 + n2 + n3 + n4) / 4);
    }
    else
    {
        printf("invalid");
    }
}