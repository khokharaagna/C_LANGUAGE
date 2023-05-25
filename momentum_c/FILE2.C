#include<stdio.h>
#include<conio.h>

void  main(){
int unit;
float amount ,total ,charge;
clrscr();

 printf("Enter your total unit");
 scanf("%d", &unit);

if(unit <=50){
 amount =unit *0.50;
}else if (unit <=100){
amount = 25+ ((unit -50) *0.75);
}else if(unit <100){
amount =100+ ((unit -150) *1.20);
}else {
amount =220+ ((unit -250) *1.50);
}
 charge=amount *0.20;
 total=amount +charge;

 printf("electricity bills rs.  %.2f" ,total);
getch();
}