#include<stdio.h>

int main(){
    int a,b,c,d,num;
    printf("enter 3 digit number that you wish to reverse: ");
    scanf("%d",&num);
    a=num/100;
    b=num%100;
    c=b/10;
    d=b%10;
    printf("Numbaer in reverse order :  %d\n",d*100+c*10+a);
    return 0;
}