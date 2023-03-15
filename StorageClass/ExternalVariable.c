#include<stdio.h>
#include<conio.h>
void main()
{
    extern x; //external variable
    x=5;
    printf("%d\n",x);
    f1();
    f2();
}
f1()
{
    extern x;
    x=x+10;
    printf("%d\n",x);
}
f2()
{
    extern x;
    x=x+10;
    printf("%d",x);
}
int x;
















