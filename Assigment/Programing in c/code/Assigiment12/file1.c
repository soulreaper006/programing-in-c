#include <stdio.h>

int main()
{
    int a, b;
    printf("How mamy rows you want in 2D aray :");
    scanf("%d", &a);
    printf("How mamy cloumb you want in 2D aray :");
    scanf("%d", &b);

    int arry[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("enter a number to inseart in array :");
            scanf("%d", &arry[i][j]);
        }
        if (i == a - 1)
        {
            break;
        }
        printf("Enter number for next row \n");
    }

    printf("Your array is :\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d  ", arry[i][j]);
            if (j == b - 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}