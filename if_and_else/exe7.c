
#include<stdio.h>
int main()
{
    int salary,average;
    printf("enter salary:");
    scanf("%d",&salary);
    
    if(salary>20000)
    {
        printf("above average;");
    }
    else
    {
        printf("below average:");
    }
    return 0;
}