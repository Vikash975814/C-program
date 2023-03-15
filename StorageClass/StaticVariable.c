#include<stdio.h>
#include<conio.h>
void main()
{
    void f();
    int i;
    for(i=1;i<=3;i++)
    {
        f();
    }
}
void f()
{
     static int i=0;  //static variable
    i=i+1;
    printf("%d\n",i);
}














