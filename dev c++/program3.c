#include<stdio.h>
void main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int a[n];
	int b[n];
	int c[n];
	int i;
	for(i=0;i<n;i++){
	printf("enter a[%d]",i);
	scanf("%d" ,&a[i]);
	}
	printf("Enter the element of b\n");
	for(i=0;i<n;i++){
		printf("Enter b[%d]",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		c[i]=a[i]+b[i];
	}
	printf("sum of A and B element are  below \n");
	for(i=0;i<n;i++){
		printf("%d",c[i]);
	}
	
}
