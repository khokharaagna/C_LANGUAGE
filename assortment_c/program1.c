#include<stdio.h>
int main(){
	int n;
	int class[n];
	int i;
	printf("Enter  the size of array:");
	scanf("%d",&n);
    printf("Enter the element in array:");
    for(i=0; i<n; i++)
	{
    	scanf("%d", &class[i]);
	}
	printf("\nall negative element in array  are: ");
	for(i=0; i<n;i++)
	{
		if(class[i]<0)
		{
		 printf("%d\t",class[i]);
		}
	
		
	}
}

