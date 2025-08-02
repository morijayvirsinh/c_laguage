
#include<stdio.h>
int main()
{
    int temp;
    printf("enter temprature:");
    scanf("%d",&temp);
    if(temp>=30)
    {
        printf("hot\n");

    }
    else{
        printf("cold\n");
    }
    return 0;
}