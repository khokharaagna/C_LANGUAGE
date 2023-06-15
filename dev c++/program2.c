#include<stdio.h>
void main(){
int n;
	printf("Enter the size of array ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	int sum =0;
	
	
	printf("Enter the array element ");
	for(i=0;i<n;i++){
		printf("Enter a[%d]",i);
		scanf("%d",a[i]);
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	printf("sum is %d",sum/n);
    }
