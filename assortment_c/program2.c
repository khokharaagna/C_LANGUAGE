#include<stdio.h>
int main(){
	int n,i,max,a[100];
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter  array element:");
	for(i=0;i<n;i++)
	{
		printf("enter the number:");
		scanf("%d",&a[i]);
	}
	printf("the array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
     if(max<a[i])
	 {
	  max=a[i];
	 }
	}
	printf("the largest element is=%d",max);
}
