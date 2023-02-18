#include <stdio.h>  
#include<conio.h>
void main()
{
    int i,n,count;
    printf("All prime number is 1 to 100\n");
    for(n=1;n<=1000;n++)
{
     count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
        if(count==2)
        {
            printf("%d ",n);
        }
    }
getch();
}
