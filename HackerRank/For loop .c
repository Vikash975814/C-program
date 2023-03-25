#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
      char n[11][10]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    for(int i=a; i<=b ;i++) {
        int m = i<=9?i-1:9 + i % 2;
        printf("%s \n",n[m]);
    }
    return 0;
}
