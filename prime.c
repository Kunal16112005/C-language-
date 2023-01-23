#include <stdio.h>
void main()
{
    int n, i = 1, temp = 0;
    scanf("%d", &n);
    for (i = 2; i < +n; i++)
    {
        if (n % i == 0)
        {
            temp = 1;
            break;
        }
        else
        {
            temp = 0;
        }
    }
    if (temp == 1)
    {
        printf(" not prime");
    }
    //  else if (temp == 0)
    //  {
    //     printf(" prime");
    //  }
    else
    {
        printf("kunal");
    }
}