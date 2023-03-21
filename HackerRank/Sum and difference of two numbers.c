#include <stdio.h>
int main()
{
int n,m,sum,difference;
 float input,output,su,diff;
scanf("%d %d",&n, &m);
    sum=n+m;
    difference=n-m;
    printf("%d %d\n",sum,difference);
    scanf("%f %f",&input,&output);
    su=input+output;
    diff=input-output;
    printf("%0.1f %0.1f",su,diff);
   return 0;
}
