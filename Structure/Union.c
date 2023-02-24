    #include<stdio.h>
    #include<conio.h>
    void main()
    {
        union u{
            int x;
            float y;
        };
        union u u1;
        printf("enter the value of x");
        scanf("%d",&u1.x);
        printf("%d\n",u1.x);
        printf("enter the value of y");
       scanf("%f",&u1.y);
        printf("%f",u1.y);
        getch();
    }
