#include<stdio.h>

int main(){
    int num;
    printf("enter a number : ");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("the number %d is EVEN\n",num);
    }else{
        printf("the number is odd\n");
    }
    return 0;
    
}