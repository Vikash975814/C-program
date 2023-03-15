#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int *ptr, n, i;
	printf(“Enter how many numbers you want to enter”);
	scanf(“%d”, &n);
	ptr = (int *) malloc (n * sizeof(int));
	for ( i=0; i< n; i++)
	{
	scanf(“%d”, ptr+i)
	}
	
	for ( i=0; i< n; i++)
	{
	scanf(“%d”, *(ptr+i));
	}	
getch();
}


