
#include<stdio.h>
int main()
{
    int num,square;
    printf("enter a number is:");
    scanf("%d",&num);

    if(num > 0)
    {
        num =-num;
    }
    printf("convert in negative:%d\n",num);

    square=num*num;
    printf("squre of the negative number:%d\n",square);
    return 0;
}