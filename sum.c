#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("enter the num:");
    scanf("%d", &n);
    for (i = 2; i <= n; i = i + 2)
    {
        sum = sum + i;

        printf("%d\t", sum);
    }
}