#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    struct players
    {
        char PlayerName[30];
        char CountryName[30];
        float BattingAvarage;
    };
    struct players p[50];
    printf("Enter the 50 Employee detail");
        for(int i=0;i<50;i++){
        scanf("%s%s%f",p[i].PlayerName,p[i].CountryName,&p[i].BattingAvarage);
        }
    printf("50 Employee detail is:\n");
        for(int i=0;i<50;i++){
        printf("%s %s %f",p[i].PlayerName,p[i].CountryName,p[i].BattingAvarage);
        printf("\n");
        }
        char SearchCountry[30];
    printf("Enter the Country name");
    scanf("%s",SearchCountry);
        for(int i=0;i<50;i++){
        if(strcmp(p[i].CountryName,SearchCountry)==0)
        {
            printf("%s %s %f",p[i].PlayerName,p[i].CountryName,p[i].BattingAvarage);
        }
        }
    return 0;
}
