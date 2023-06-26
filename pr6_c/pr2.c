#include<stdio.h>
int main(){
	char str[20],n;
	int i,j=0;
	printf("\nEnter String");
	gets(str);
	
	printf("\nEnter the character which you want to count  ");
	scanf("%c",&n);
	
	for(i=0;str[i]!='\0';i++)
	{
	   if(str[i]==n)	
	   j++;
	}
	printf("\nTotal = %d",j);
	return 0;
	
}

