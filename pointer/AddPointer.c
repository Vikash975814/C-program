#include<stdio.h>
#include<conio.h>
void main()
{
    int *p,*p1;
    int sum;
   printf("Enter the value of pointers");
   scanf("%d%d\n",p,p1);
    sum= *p +  *p1;
    printf("sum is:%d",sum);
    getch();
}

