
#include<stdio.h>

int main()
{
    int units;
    float bill;
    printf("enter electricity bill units :");
    scanf("%d",&units);
    

    if(units <= 100)
    {
      bill = units *2;
    }
    else if (units <=300)
    {
        bill = units *3 ;

    }
    else if(units <=500)
    {
        bill =units *5;
    }
    else
    {
        bill = units *8;
        
    }
    printf("total electricity bill=  %.2f\n",bill);
    return 0;
}