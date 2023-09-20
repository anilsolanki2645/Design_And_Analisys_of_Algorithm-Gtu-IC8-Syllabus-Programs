#include<stdio.h>
#include<conio.h>
void main(){
 int n, i;
 clrscr();
 printf("Enter Number");
 scanf("%d",&n);
 for(i=2;i<=n;i++){
  if(n%i==0){
   printf("Smallest Divisor is : %d",i);
   break;
   }
  }
  getch();
}