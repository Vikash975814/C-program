#include<stdio.h>
#include<conio.h>
void main()
{
    char color;
    printf("enter the color");
    scanf("%c",&color);
    switch(color)
    {
        case 'R':
        case 'r':
        printf("RED");
        break;
         case 'G':
         case 'g':
        printf("GREEN");
        break;
        case 'W':
        case 'w':
        printf("WHITE");
        break;
        case 'Y':
        case 'y':
        printf("YELLOW");
        break;
        case 'O':
        case 'o':
        printf("ORANGE");
        break;
        default:
        printf("invalid character");
    }
    getch();
}	
