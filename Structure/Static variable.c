#include<stdio.h>
void fun();
int main(){
    fun();
    fun();
    fun();
    return 0;
}
void fun(){
    int a=1;
    static int b=1;
    printf("%d \n %d",a,b);
    b++,a++;
}
