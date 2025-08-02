
#include<stdio.h>;
int main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if(ch>='A' &&ch<='Z' ||ch>='a'&&ch<='z')
    {
        printf("if it is alphabet:");
    }
    else
    {
        printf("not an alphabet:");
    }
    return 0;
}