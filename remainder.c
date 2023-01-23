#include <stdio.h>
void main()
{
    int a, b, q, r;
    printf("enter the no");
    scanf("%d%d", &a, &b);

    q = b / a;
    r = a % b;

    printf("quotient is %d\n", q);
    printf("remaimder is %d", r);
}