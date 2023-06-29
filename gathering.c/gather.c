#include<stdio.h>
void add(){
	int c,d;
	int add;
	printf("enter the first number");
	scanf("%d",&c);
	printf("enter the second number");
	scanf("%d",&d);
	 add=c+d;
	 printf("Addition of C and D is : %d",add);
}

   void sub(){
	int c,d;
	int sub;
	printf("enter the first number");
	scanf("%d",&c);
	printf("enter the second number");
	scanf("%d",&d);
	 sub=c-d;
	 printf("Subtraction of C and D is : %d\n",sub);
}
 void multiply(){
	int c,d;
	int multiply;
	printf("enter the first number");
	scanf("%d",&c);
	printf("enter the second number");
	scanf("%d",&d);
	 multiply=c*d;
	 printf("Multiplication of C and D is : %d\n",multiply);
}
void divide(){
	int c,d;
	int divide;
	printf("enter the first number");
	scanf("%d",&c);
	printf("enter the second number");
	scanf("%d",&d);
	 divide=c/d;
	 printf("Division of C and D is : %d\n",divide);
}
void mod(){
	int c,d;
	int mod;
	printf("enter the first number");
	scanf("%d",&c);
	printf("enter the second number");
	scanf("%d",&d);
	 mod=c%d;
	 printf("Module of C and D is : %d\n",mod);
}


void main(){
	int c,n;
	
  do{
  
	printf("===========Menu==========\n");
	printf("Press 1 for '+' :\n");
	printf("Press 2 for '-' :\n");
	printf("Press 3 for '*':\n");
	printf("Press 4 for '/' :\n");
    printf("Press 5 for '%'\n"); 
	printf("Enter your choice\n :");
    scanf("%d",&c);
    
 switch(c){
 	case 1:
 		add();
 		break;
 		
 	case 2:
 		sub();
 		break;
	case 3:
 		multiply();
 		break;	
	case 4:
 		divide();
 		break;
	case 5:
 		mod();
 		break;
		 default:
		 printf("you are exited:"); 
		 	break;
 }
}while(c !=0);
}

