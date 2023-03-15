#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
   Void main(){
   FILE *fptr1, *fptr2;
   char c;
   fptr1 = fopen("Input.txt, "r");
   fptr2 = fopen(filename, "w");
   c = fgetc(fptr1);
   while (c != EOF){
fputc(c, fptr2);
      c = fgetc(fptr1);
   }
fclose(fptr1);
fclose(fptr2);
   getch();
}
