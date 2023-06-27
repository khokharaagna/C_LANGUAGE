#include<stdio.h>
void sum(int a){
	printf("enter the value :");
	scanf("%d",&a);
	if(a%3==0 && a%5==0){
		printf("the given number is divisble by 3 and 5");
		
	}else{
		printf("the given number is not divisble by 3 and  5");
	}

}
void main(){
	int b;
	sum(b);
}
