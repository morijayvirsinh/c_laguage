
#include<stdio.h>
int main()
{
    int  a,b,c;
    printf("enter three side of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c) &&(a+c>b)&&(b+c>a))
    {
        if(a==b && b==c)
        {
         printf("equailateral triangle\n");
        }    
    
       else if (a==b||b==c||a==c)
        {
            printf("isosceles triangle\n");
        }
        else 
        {
            printf("scalene triangle\n");
        }
    }    
     else
     {
        printf("Not a triangle ");
     }
     return 0;
    
}