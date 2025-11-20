#include<stdio.h>

int main (){
    int a;
    printf("enter your choice 1 to 3 : ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Hello\n");
        break;
    case 2:
        printf("Ohio\n");
        break;
    case3:
        printf("chao \n");
    
    default:
        printf("worng choice\n");
        break;
    }
    return 0;
}