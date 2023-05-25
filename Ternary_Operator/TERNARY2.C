#include<stdio.h>
#include <conio.h>

void main(){
int a=8;
int b=3;
int c=12;
clrscr();
(a<b)
 ?((a<c)? printf("a is min"):printf("c is min"))
 :((b<c)? printf("b is min"):printf("c is min"));
getch();
}