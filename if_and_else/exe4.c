
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num>=1 &&num<=100 )
    {
        printf("number  in range");
    }
    else
    {
        printf("out of range");
    }
    return 0;
}