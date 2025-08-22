
#include<stdio.h>

int main()
{
    int choice,i,roll_no,total_mark=0;
    float average_mark;

    printf("enter student roll no:");
    scanf("%d",&roll_no);
    printf("enter number of subject:");
    scanf("%d",&choice);

    int sub[choice];
    for(i=0;i<choice;i++)
    {
        printf("enter subject mark[%d]:",i+1);
        scanf("%d",& sub[i]);
        total_mark+=sub[i];
 
    }
        printf("\n student roll no. :%d\n",roll_no);
        printf("subject marks:\n");
    for(i=0;i<=choice;i++)
    {
        printf("subject %d:%d\n",i+1,sub[i]);
    }
    average_mark=(float)total_mark/choice;
    printf("\n total marks:%d\n",total_mark);
    printf("average mark:%.2f\n",average_mark);
    
    return 0;

}