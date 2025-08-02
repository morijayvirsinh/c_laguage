
#include<stdio.h>
int main()
{
    int tem;
    printf("emter temprature:");
    scanf("%d",&tem);
    if(tem>40)
    {
        printf("it's too hot:\n");
    }
    else if(tem>=30)
    {
        printf("it's warm:");
    }
    else if(tem>=20)
    {
        printf("pleasant weather:");
    }
    else if(tem>=10)
    {
        printf("cold weather:");
    }
    else{
        printf("too cold!");
    }
    return 0;
}