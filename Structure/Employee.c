#include<stdio.h>
#include<conio.h>
void main()
{
    struct employee
    {
        int EmpId;
        char name[30];
        int age;
        float salary;
    };
    struct employee Emp[50];
    printf("Enter the 50 Employee detail");
    for(int i=0;i<50;i++){
        scanf("%d%s%d%f",&Emp[i].EmpId,Emp[i].name,&Emp[i].age,&Emp[i].salary);
    }
    printf("Your employee detail is:\n");
       for(int i=0;i<50;i++){
        printf("%d %s %d %f",Emp[i].EmpId,Emp[i].name,Emp[i].age,Emp[i].salary);
               printf("\n");
       }    
    getch();
}
