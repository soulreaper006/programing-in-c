#include<stdio.h>

int fact(int n){
    int out=1;
    for(int i =1;i<=n;i++){
        out*=i;
    }
    return out;
}

int main(){
    int in;
    printf("enter a number: ");
    scanf("%d",&in);

    printf("%d",fact(in));
    return 0;
}