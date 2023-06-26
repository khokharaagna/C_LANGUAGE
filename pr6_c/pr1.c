#include<stdio.h>
#include<string.h>
void main(){
	char str1[50],str2[50];
	printf("\n Enter the string to check for palindrome:");
	gets(str1);
	if(strcmp(str1,str2)==0)
	{
	printf("String is palindrome");
    }
	else
	{
	printf("String is not palindrome");
    }
  
}
