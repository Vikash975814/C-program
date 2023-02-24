#include<stdio.h>
#include<conio.h>
void main()
{
    struct employee
    {
        int empid;
        char empName[30];
        int empAge;
    };
    struct employee std[10];
    int i;
    printf("enter 10  employee detail");
    for(i=0;i<10;i++)
    {
        scanf("%d%s%d",&std[i].empid,std[i].empName,&std[i].empAge);
    }
    printf("10 Employee detail is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d %s %d\n",std[i].empid,std[i].empName,std[i].empAge);
    }
    getch();
}
