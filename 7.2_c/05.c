#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,k;
    for(i=5;i>=1;i--){

for(int j=i;j<5;j++)
{
    printf(" ");
}
    for(k=i;k>=1;k--){
     printf("%d",k);
    }
     
     printf("\n");
    }
    return 0;
}