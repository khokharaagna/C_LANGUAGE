#include<stdio.h>
#include<conio.h>

void main(){
int a;
int b;
int c;
clrscr();
printf("enter the number a:");
scanf("%d", &a);
printf("enter the number b:");
scanf("%d", &b);
printf("enter the number c:");
scanf("%d", &c);
if(a<b ){
printf("a is min");
}else if(b<c){
printf("b is min");
}else{
printf("c is min");
}
getch();
}

