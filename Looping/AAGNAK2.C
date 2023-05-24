#include<stdio.h>
#include<conio.h>

void main(){
int num;
clrscr();
printf("enter a number a:");
scanf("%d", &num);
if(num % 2==0){
printf("a is even", num);
}else{
printf("a is odd", num);
}
getch();
}