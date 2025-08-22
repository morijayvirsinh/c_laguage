
#include<stdio.h>
int main()
{
    float a, b, result;
    char op;
    printf("enter a=");
    scanf("%f",&a);
    printf("enter b=");
    scanf("%f",&b);
    printf("Enter operator('+','-','*','/')=");
    scanf("%c",&op);
    if(op =='+')
    {
        result=a+b;
        printf("result = %.2f\n",result);

    }
    else if(op =='-')
    {
        result=a-b;
        printf("result  = %.2f\n",result);
    }
    else if(op =='*')
    {
        result= a*b;
        printf("result =%.2f\n",result);
    }
    else if(op =='/')
    {
        if(b != 0)
        result= a/b;
        printf("result =%.2f\n",result);
    }
    //else 
    //{
      // printf(" error:division by zero is not allowed.\n");
    //}
    
     else

    {
        printf("invalid operator.\n");
    }
    
    return 0;

}