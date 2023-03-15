  #include<stdio.h>
  #include<conio.h>
   void main()  {
    int x;
    int *p;
    x=25;
    p=&x;   //create a pointer
    printf("x is :%d\n",x);
    printf("pointer p  is :%d",*p); //print a pointer value
    getch();
}
