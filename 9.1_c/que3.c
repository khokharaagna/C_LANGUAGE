#include<stdio.h>
main(){
char str[100];
int i;
printf("Enter string : ");
gets(str);

printf("My Name  Is Aagna is %s",str);
for(i=0;str[i]!=NULL;i++){
	if(str[i]>='a' &&str[i]<='z')
	{
	
	str[i]=str[i]-32;
    }	
    else if(str[i]>='A' &&str[i]<='Z')
    {
	str[i]=str[i]+32;

    }

}
printf("\nThe toggle case string is %s",str);

return 0;
}
