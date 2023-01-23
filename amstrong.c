#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        n = n % 10;
        sum = sum + n * n * n;
        n = n / 10;
        printf("%d", &sum);
    }
    if (sum == n)
    {
        printf(" amstrong no ");
    }
    else
    {
        printf(" is not amstrong");
    }
}