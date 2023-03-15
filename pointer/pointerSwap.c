#include<stdio.h>
#include<conio.h>
void main()
{
    void swap(int *,int *);
    int x=10,y=15;
    printf("Before swapping is:%d %d\n",x,y);
    swap(&x,&y);
    printf("After swapping is:%d %d",x,y);
getch();
}
void swap(int *p,int*p1)
{
    int temp;
    temp=*p1;
    *p1=*p;
    *p=temp;
}


