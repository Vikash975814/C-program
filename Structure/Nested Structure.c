#include<stdio.h>
int main(){
    struct employee{
        int id;
        char name[30];
        struct salary{
            int Bp;
            int Ms;
            int Ys;
        }Allowance;
    }e1;
printf("Enter the employee detail");
scanf("%d%s%d%d%d",&e1.id,e1.name,&e1.Allowance.Bp,&e1.Allowance.Ms,&e1.Allowance.Ys);
printf("Your employee detail is:\n");
printf("%d %s %d %d %d",e1.id,e1.name,e1.Allowance.Bp,e1.Allowance.Ms,e1.Allowance.Ys);
    return 0;
}
