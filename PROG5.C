#include<stdio.h>
#include<conio.h>
void main(){
 int a,b,i,temp;
 clrscr();
 printf("Enter first Number : ");
 scanf("%d",&a);
 printf("Enter second number : ");
 scanf("%d",&b);
 temp=a;
 for(i=1;i<b;i++){
  a=a+temp;
 }
 printf("result of %d",a);
 getch();
}