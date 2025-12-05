#include<stdio.h>
int main()
{
    int range;
    printf("enter a number: ");
    scanf("%d",&range);

    for (int i = 1; i <= range; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}