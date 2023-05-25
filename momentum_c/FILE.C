#include<stdio.h>
#include<conio.h>

void main(){
int a;
printf("enter the number");
scanf("%d",&a);
clrscr();

a%2==0? printf("even number\n"):printf("odd number\n");
getch();
}