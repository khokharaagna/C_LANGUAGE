#include<stdio.h>
#include<conio.h>

void main(){
int a=1;

int n;
clrscr();

printf("ENTER THE VALUE OF N: ");
scanf("%d",&n);

do{
if(a%2==0){
printf("%d\n",a);
}
a++;
}while(a<=n);

getch();
}