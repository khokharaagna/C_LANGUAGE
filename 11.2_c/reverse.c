#include<stdio.h>
void main(){
	int i,n;
	int a[n];
	int *ptr;
	
	printf("enter the length of array :");
	scanf("%d",&n);
	printf("enter the array element :\n");
	
	for(i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	ptr=&a[n-1];
	   printf("Reversed array elements:\n");
	   for(i=0;i<n;i++)
      printf("%d\n", *ptr--);

}
