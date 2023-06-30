#include<stdio.h>
void main(){
	int a,b,*p,*q,r;
	p=&a; q=&b;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	printf("Before swapping :%d%d\n",a,b);
	
r=*p;
*p=*q;
*q=r;

  printf("After swapping :%d%d",*p,*q);	
}
