#include<stdio.h>
#include<conio.h>
void main()
{
    struct student
    {
        int rollno;
        char name[30];
    } s1={1,"Vikas"};
    printf("the student is:%d,%s",s1.rollno,s1.name);
    getch();
}
