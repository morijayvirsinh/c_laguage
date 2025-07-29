
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("enter the first number :");
    scanf("%d",&num1);
    printf("enter the second number :");
    scanf("%d",&num2);
   sum=num1+num2;
    if(sum >= 100)
    {
        printf(" the sum is greater than 100:  %d\n",sum);
    }
    return 0;
}