#include<stdio.h>

void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;

   printf("a is now = %d   &  b is now = %d",a,b);
}

int main(){
    int x,y;
    printf("enter numbers :  ");
    scanf("%d%d",&x,&y);
    swap(x,y);
    return 0;
}