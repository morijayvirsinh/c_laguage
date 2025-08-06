
#include<stdio.h>

int main()
{
    int age;
    float weight;
    printf("enter your age:");
    scanf("%d",&age);
    printf("enter your weight:");
    scanf("%f",&weight);
    if(age <18)
    {
         printf("Not eligible (too young)");
    }
    else if(weight<50)
    {
        printf("Not eligible (Underweight) ");
    }
    else
    {
        printf("Eligible for blood donation ");
    }
    return 0;

}