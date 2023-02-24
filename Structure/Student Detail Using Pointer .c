#include<stdio.h>
#include<conio.h>
void main()
{
    struct student
    {
        int Roll;
        char Name[30];
        struct DateOfBirth
        {
            int date;
            int month;
            int year;
        }Birth;
    };
    struct student s1;
    struct student *ptr; //pointer variable
    ptr=&s1;
     printf("enter the  student detail");
     scanf("%d%s%d%d%d",&ptr->Roll,ptr->Name,&ptr->Birth.date,&ptr->Birth.month,&ptr->Birth.year);
     printf(" student detail is:\n");
    printf("%d %s %d %d %d",ptr->Roll,ptr->Name,ptr->Birth.date,ptr->Birth.month,ptr->Birth.year);
         getch();
    }
