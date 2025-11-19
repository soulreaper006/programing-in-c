#include<stdio.h>

int main(){
    int a,b,num;
    printf("enter 2 digit number that you wish to reverse: ");
    scanf("%d",&num);
    a=num/10;
    b=num%10;
    printf("Numbaer in reverse order :  %d\n",b*10+a);
    return 0;
}