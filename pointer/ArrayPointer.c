#include<stdio.h>
#include<conio.h>
void main()
{
    int A[10],i;
    int *p;
    p=&A[0];
    printf("Enter the element of Array");
    for(i=0;i<10;i++)
    {
        scanf("%d",p+i);
    }
    printf("Your array element is:\n");
        for(i=0;i<10;i++)
        {
         printf("%d\n",*(p+i));   
        }
        getch();
    }

