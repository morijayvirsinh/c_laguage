
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year % 4==0)
    {
        printf("the leap year:");
    }
    return 0;
}