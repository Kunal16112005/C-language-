#include <stdio.h>
void main()
{
    char alphabet, a, e, i, o, u;
    printf("enter the alphabet");
    scanf("%c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonent");
    }
}