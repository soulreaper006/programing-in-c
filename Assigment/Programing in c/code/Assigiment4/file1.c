#include <stdio.h>

int main()
{
    printf(" Odd number 1 to 10 : ");
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}