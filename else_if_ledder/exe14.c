
#include<stdio.h>
int main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age <=5)
    {
        printf("free entry:");
    }
    else if (age>5 &&age<=12)
    {
        printf("child ticket 50:");
    }
    else if(age >=13 &&age <=60)
    {
        printf("Adult ticket 120");
    }
    else
    {
        printf("senior ticket 80:");
    }
    return 0;
    
    
    
}