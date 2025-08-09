
#include<stdio.h>

int main()
{
    char username, password;
    printf("entre username :");
    scanf("%c",&username );
    printf("enter password:");
    scanf("%c",&password);
    if(username=='j'&& username=='a'&& username=='y'&& username=='v' && username=='i')
    {
        if( password=='1'&&password=='2'&&password=='3'&&password=='4'&&password=='5')
        {
            printf("\nlogin successfuly :\n");
        }  
        else 
        {
            printf("\nincorrect password\n");
        }
    }
    else
    {
        printf("\ninvalid user\n");
    }
    return 0;
}