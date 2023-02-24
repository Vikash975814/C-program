     #include<stdio.h>
    #include<conio.h>
   void main()
{
    struct student
    {
    int roll;
    char name[30];
    int age;
}s1={1,"Rohan",36},
s2={2,"Aman",23};
printf("first student detail is:%d %s  %d\n",s1.roll,s1.name,s1.age);
printf("Second student detail is:%d %s %d",s2.roll,s2.name,s2.age);
getch();
}
