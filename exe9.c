
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num%3==0 && num%7==0)
    {
        printf("a number of multiple of 3 and 7");
    }
    return 0;
}    