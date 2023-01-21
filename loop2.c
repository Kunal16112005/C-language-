#include <stdio.h>
void main()
{
    /* int i, in, re = 0;
     printf("enter the number");
     scanf("%d", &in);
     while (in != 0)
     {
         i = in % 10;
         re = re * 10 + i;
         in = in / 10;
     }
     printf("%d", re);
 }
    int n, i, re = 0;
    printf("enter the num:");
    scanf("%d", &n);
    while (n != 0)
    {
        i = n % 10;
        re = re * 10 + i;
        n = n / 10;
    }
    printf("%d", re);
}
*/
    /* int i, n, sum = 0;
     printf("enter the num");
     scanf("%d", &n);
     while (n != 0)
     {
         i = n % 10;
         sum = sum + i;
         n = n / 10;
     }
     printf("%d", sum);*/
    int n, i, temp = 0;
    printf("enter the no:");
    scanf("%d", &n);
    while (n != 2)
    {
        if (n % 2 != 2)
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
        printf(" prime");
    }
    else
    {
        printf("not prime");
    }
}
/*
    int i, n, temp = 0;
    printf("enter the num:");
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            temp = 0;
            break;
        }
        else
        {
            temp = 1;
        }
    }
    if (temp == 0)
    {
        printf("not prime");
    }
    else
    {
        printf("prime");
    }
}
     int n, i, re = 0;
     printf("enter the no");
     scanf("%d", &n);
     while (n != 0)
     {
         i = n % 10;
         re = re * 10 + i;
         n = n / 10;
     }
     printf("%d", re);
 }
int n, i, temp=0;
printf("enter the number");
scanf("%d", &n);
while (n != 0)
{
    if (n % 2 = 0)
    {
        temp = 1;
        break;
    }
    else
    {
        temp = 0;
    }
}
if (temp = 1)
{
    printf("not prime");
}
else
{
    printf("prime");
}
}*/