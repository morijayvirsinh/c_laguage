
#include<stdio.h>
int main()
{
    int  light;
    printf("enter 1 for ON or 0 for OFF :");
    scanf("%d",&light);
    if(light==1)
    {
        printf("light is ON");
    }
    else
    {
        printf("light is OFF");
    }
    return 0;
}