#include<stdio.h>
void main(){
	int i,j,c,d,n;
	int sum=0;
	int add=0;
	int a[3][3];

   printf("Enter the elements: \n");
for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
		printf("Enter  a[%d][%d]: ",i,j);
		scanf("%d", &a[i][j]);
	}
}
printf("Enter row number: ");
scanf("%d",&n);
printf("Element  of row n:");
for(j=0;j<=2;j++){
	printf("%d ,",a[c][j]);
	sum+=a[c][j];
}
printf("\n The sum is: %d",sum);

printf("\n enter column number:");
scanf("%d",&c);
printf("\n element of column n:");
for(i=0;i<=2;i++){
	printf("%d,",a[i][c]);
	add+=a[i][c];
}
printf("\n the sum is : %d",add);
}
