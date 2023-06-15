#include<stdio.h>
int  square(int);
void main(){
	int a;
	int ans;
	printf("enter the nmuber:");
	scanf("%d",&a);
	ans=square (a);
	printf("square is %d \n",ans);
 }
 int square(int n)
 {
 	return n*n;
 }

  
