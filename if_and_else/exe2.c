
#include<stdio.h>
int main()
{
  char ch;
  printf("the characta:");
  scanf("%c",&ch);
  
  
    if (ch>='A' && ch<='Z')
  
  {
    printf("this  character is uppercase:");
  }
  else
  {
    printf("  not uppercase:");
  }
  return 0;
}