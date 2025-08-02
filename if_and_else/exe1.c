
#include<stdio.h>
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    if(num %10 == 0)
    {
        printf("multiple of 10.\n");
    }
    else
    {
        printf("not a multiple of 10.\n");
    }
    return 0;


}