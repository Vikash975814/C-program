#include<stdio.h>
#include<conio.h>
void main()
{
    struct student
    {
        int Roll;
        char Name[30];
        struct Marks
        {
            int sub1;
            int sub2;
            int sub3;
        }Subject;
    };
    struct student std[10];
     int i,sum;
     float per;
     printf("enter the 10 student detail");
     for(i=0;i<10;i++)
     {
         scanf("%d%s%d%d%d",&std[i].Roll,std[i].Name,&std[i].Subject.sub1,&std[i].Subject.sub2,&std[i].Subject.sub3);
     }
     for(i=0;i<10;i++)
     {
         printf(" student detail is:\n");
         printf("Roll number of student is:%d\n",std[i].Roll);
         printf("Name of student is:%s\n",std[i].Name);
    printf("marks of a student is %d %d %d\n ",std[i].Subject.sub1,std[i].Subject.sub2,std[i].Subject.sub3);
    sum=std[i].Subject.sub1+std[i].Subject.sub2+std[i].Subject.sub3;
    printf("Total marks of a student is:%d\n",sum);
    per=sum/3;
    printf("percentage of student is:%f\n",per);
     }
     
         getch();
    }






