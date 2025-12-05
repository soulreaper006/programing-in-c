#include<stdio.h>

int main(){
int length;
printf("enter the length of array: ");
scanf("%d",&length);

int array[length];

for (int i = 0; i < length; i++)
{
    printf("enter number to array : ");
    scanf("%d",&array[i]);
}
printf("Your array is :  ");
for (int i = 0; i < length; i++)
{
    printf("%d  ",array[i]);
}

int min =array[0] ,max=array[0];
for (int i = 0; i < length; i++)
{
    if (array[i]<min)
    {
        min=array[i];
    }
    if (max<array[i])
    {
        max=array[i];
    } 
}
printf("\n%d in min valu in array \n",min);
printf("%d in max valu in array \n",max);
return 0;
}