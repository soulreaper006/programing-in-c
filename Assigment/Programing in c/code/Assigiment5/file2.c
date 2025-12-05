#include <stdio.h>

int main()
{
    int a;
    int check = 0;

    printf("Enter number : ");
    scanf("%d", &a);

    if (a <= 1)
    {
        printf("%d is not a prime Number\n", a);
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            if (i % a == 0)
            {
                check = 1;
            }
        }
    }
    if (check == 0)
    {
        printf("%d is not a prime Number\n", a);
    }
    else
    {
        printf("%d is a prime Number\n", a);
    }
    return 0;
}