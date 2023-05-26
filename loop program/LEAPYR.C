#include<stdio.h>
#include<conio.h>

int main()
{
   int a;
  printf("enter year");
   scanf("%d", &a);
   if(a%4==0)
   printf("year is leap");
   else
   printf("not a leap year");
   return 0;
}