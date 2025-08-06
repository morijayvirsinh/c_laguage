
#include<stdio.h>
int main()
{
    char a;
    printf("enter character:");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
      printf(" a vovel:\n");
    }
    else if(a>='a'&&a<='z'||a>='A'&&a<='Z')
    {
        printf("A consonant:\n");
    }
    else
    {
      printf("not an alphabet:");
    }
    return 0;
}