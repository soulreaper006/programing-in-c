#include <stdio.h>

int main()
{
    int choice;
        printf("enter your choice 1 to 4 for\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division");
    printf("enter your choice : ");
    scanf("%d", &choice);
    float a, b;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter secound number : ");
    scanf("%f",&b);

    switch (choice)
    {
    case 1:
        printf("Addition of two Number is: %f\n", a + b);
        break;
    case 2:
        printf("Subtraction of two Number is:%f\n", a - b);
        break;
    case 3:
        printf("Multiplication of two Number is: %f\n", a * b);
        break;
    case 4:
        printf("Division of two Number is: %f\n", a / b);
        break;
    default:
        printf("wrong choice!\n");
        break;
    }
}