#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
     for(int i=0;i<(2*n)-1;i++){
         for(int j=0;j<(2*n)-1;j++){
             int m = i < j ? i : j;
            m = m < (2*n)-1-i ? m : (2*n)-i-2;
            m = m <(2*n)-j-2 ? m : (2*n)-j-2;
            printf("%d ", n-m);
        }
        printf("\n");
         }
    return 0;
}
