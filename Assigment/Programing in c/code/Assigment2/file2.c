#include<stdio.h>

int main(){
    int a;
    printf("Enter your total marks out of 700 : ");
    scanf("%d",&a);
    if (a/7>=60)
    {
        printf("First Divison\n");
    }else if (a/7>=50)
    {
        printf("Secound Divison\n");
    }
    else if (a/7>=30)
    {
        printf("Third Divison\n");
    }
    else
    {
        printf("Fail\n");
    }
    
    return 0;
}