
#include<stdio.h>
int main()
{
    int mark,passingmark;
    printf("enter the mark:");
    scanf("%d",&mark);
    printf("enter the passingmark");
    scanf("%d",&passingmark);
    if(mark>=passingmark)
    {
        printf("student is pass:\n");
    }

    return 0;

}