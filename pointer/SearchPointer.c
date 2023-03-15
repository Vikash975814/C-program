 #include<stdio.h>
#include<conio.h>
void main()
{
    int A[10],i,n;
    int *p;
    p=&A[0];
    printf("Enter the element of Array");
    for(i=0;i<10;i++)
    {
        scanf("%d",p+i);
    }
    printf("Enter the number do you want to search");
    scanf("%d",&n);
        for(i=0;i<10;i++)
        {
          if(*(p+i)==n)
          {
              printf("search is at location %d",i+1);
              break;
          }
        }
        if(i==10)
        {
            printf("Search element is not available");
        }
        getch();
    }
