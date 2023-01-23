#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter the no:");
    scanf("%d%d%d", &a, &b, &c);
    if (b < c)
    {
        printf(" greter is %d ", c);
    }
    else if (a < b)
    {
        printf("greater is %d", b);
    }
    else
    {
        printf("greater is %d", a);
    }
}