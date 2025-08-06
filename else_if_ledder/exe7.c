
#include<stdio.h>
int main()
{
    int speed;
    printf("enter speed:");
    scanf("%d",&speed);
    if(speed<=60)
    {
        printf("no fine");
    }
    else if (speed >=61 && speed <=80)
    {
        printf("warning");
    }
    else if(speed >=81 &&speed <=100)
    {
        printf("fine 500 ");
    }
    else{
        printf("license suspended.");
    }
    
    return 0;

}