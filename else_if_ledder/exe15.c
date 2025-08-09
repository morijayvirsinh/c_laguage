
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    float average;
    printf("enter mark for subject 1:");
    scanf("%d",&m1);
     printf("enter mark for subject 2:");
    scanf("%d",&m2);
     printf("enter mark for subject 3:");
    scanf("%d",&m3); 
     printf("enter mark for subject 4:");
    scanf("%d",&m4);
     printf("enter mark for subject 5:");
    scanf("%d",&m5);

    average=(m1+m2+m3+m4+m5)/5.0;
    printf("\n Average marks =%2.f\n",average);

    if(average>=90)
    {
        printf("Grade :A+");
    }
    else if (average>=80)
    {
        printf("Grade: A");

    }
    else if(average>=70)
    {
        printf("Grade: B");

    }
    else if (average>=60)
    {
        printf("Grade :C");
    }
    else if(average>=50)
    {
        printf("Grade: D");
    }
    else
    {
        printf("Grade :F");
    }
    return 0;


}