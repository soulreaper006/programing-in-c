#include <stdio.h>

int main()
{
    int input;
    printf("Enter number for factorial : ");
    scanf("%d", &input);
    int output = input;
    for (int i = input; i > 1; i--)
    {
        output = output * (i - 1);
    }
    
    printf("Factorial of !%d = %d\n", input, output);

    return 0;
}