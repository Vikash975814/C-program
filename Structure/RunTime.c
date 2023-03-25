#include<stdio.h>
#include<conio.h>
void main()
{
    struct student
    {
        int rollno;
        char name[30];
    } ;
    struct student s1;
    printf("Enter the student name and roll no");
      scanf("%s%d",s1.name,&s1.rollno);
      printf("%s%d",s1.name,s1.rollno);
    getch();
}
