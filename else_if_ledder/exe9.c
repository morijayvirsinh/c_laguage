
#include<stdio.h>

int main()
{
    float weigth, height, bmi;
    printf("enter weight in kg:");
    scanf("%f",&weigth);
    printf("enter height in meters:");
    scanf("%f",&height);
    bmi = weigth /(height * height);
    printf("bmi is : %.2f\n",bmi);
     
    if(bmi <18.5)
    {
        printf("category :underweight");
    }
    else if(bmi>= 18.5  && bmi<=24.9 )
    {
        printf("category : Normal");
    }
    else if(bmi >=25 && bmi<=29.9)
    {
        printf("category : Overweight");
    }
    else
    {
        printf("category : Obese ");
    }
    return 0;
}