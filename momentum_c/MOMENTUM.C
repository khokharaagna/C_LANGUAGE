#include<stdio.h>
#include<conio.h>

void main(){
int a;
printf("enter the number");
scanf("%d",&a);
clrscr();

a%2==0? printf("a is even"):printf("a is odd");
getch();
}