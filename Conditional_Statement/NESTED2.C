#include<stdio.h>
#include<conio.h>

void main(){
int a=80;
int b=3;
int c=7;
int d=12;
clrscr();


if(a>b && a>c && a>d)
{
printf("a is greatest");
}

else if(b>a && b>c && b>d){
printf("b is greatest");
}
else if(c>a && c>b && c>d){
printf("c is greatest");
}
else
{
 printf("d is greatest");
}
getch();





}