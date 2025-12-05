#include<stdio.h>

int main(){
    int input;
    printf("enter number: ");
    scanf("%d",&input);

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (j==i || j==input-1-i)
            {
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    return 0;
}