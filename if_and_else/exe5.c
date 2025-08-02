
#include<stdio.h>
int main()
{
    int lenght,breadth;
    printf("enter the lenght:");
    scanf("%d",&lenght);
    printf("enter the breadth:");
    scanf("%d",&breadth);
    if(lenght == breadth)
    {
        printf("it is a square:");
    }
    else
    {
        printf("it is a rectangle:");
    }
    return 0;
}
