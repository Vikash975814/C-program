#include<stdio.h>
#include<conio.h>
int main(){
    struct student {
        int roll;
        char name[30];
    };
    struct student s1,*ptr;
    ptr=&s1;
    printf("Enter the student detail");
    scanf("%s%d",ptr->name,&ptr->roll);
    printf("student detail is:\n");
    printf("%s %d",ptr->name,ptr->roll);
    return 0;
    
}
