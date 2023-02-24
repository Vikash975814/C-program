#include<stdio.h>
#include<conio.h>
void main()
{
    struct employee
    {
        int empid;
        char empName[30];
        struct salary
        {
            int HRA;
            int DA;
            int CA;
        }Allowance;
    };
    struct employee std[10];
     int i;
     printf("enter the 10 employee detail");
     for(i=0;i<10;i++)
     {
 scanf("%d%s%d%d%d",&std[i].empid,std[i].empName,&std[i].Allowance.HRA,&std[i].Allowance.DA,&std[i].Allowance.CA);
     }
     printf("10 employee detail is:\n");
     for(i=0;i<10;i++)
     {
    printf("%d %s %d %d %d\n",std[i].empid,std[i].empName,std[i].Allowance.HRA,std[i].Allowance.DA,std[i].Allowance.CA);
    }
         getch();
    }


