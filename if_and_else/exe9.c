
#include<stdio.h>
int main()
{
    int speed;
    printf("enter speed limit:");
    scanf("%d",&speed);
    if(speed>60)
    {
        printf("over speed limit:");

    }
    else
    {
        printf("within limit:");
    }
    return 0;
    
}