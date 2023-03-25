#include<stdio.h>
#include<conio.h>
void main()
{
    struct student
    {
        int rollno;
        char name[30];
    };
    struct student S[2];
    for(int i=1;i<=2;i++){
    scanf("%d%s",&S[i].rollno,S[i].name);
    }

    for(int i=1;i<=2;i++){
    printf("%d%s",S[i].rollno,S[i].name);
    }
    getch();
}
