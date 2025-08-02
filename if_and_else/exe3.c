
#include<stdio.h>
int main()
{
    char ch;
    printf("the character is :");
    scanf("%c",&ch);
    if(ch>='a' &&ch<='z')
    {
        printf("character is lowercase:");

    }
    else{

        printf("character is not lowercase:");
    }
    return 0;
}