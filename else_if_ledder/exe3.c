
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num==0)
    {
        printf("number is zero:");
    }
    else if(num %2==0)

    {
        if(0<num)
        {
            printf("even numbet is positive");
        }
        else
        {
            printf("even number is negetive:");
        }
        
    }
    else 

    {
        if(0<num)
        {
            printf("odd number is positive:");
        }
        else
        {
            printf("odd number is negetive:");
        }
    }
    
    return 0;

}