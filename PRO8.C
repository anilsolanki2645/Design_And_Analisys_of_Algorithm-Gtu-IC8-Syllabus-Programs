#include<stdio.h>
#include<conio.h>

int add(int a,int b){
 if(a<b){
  return add(b,a);
 }
 else if(b!= 0){
  return a+(add(a,b-1));
 }
 else{
  return 0;
 }
 }
 void main(){
 int c,d;
 clrscr();
 printf("Enter first number : ");
 scanf("%d",&c);
 printf("Enter second number : ");
 scanf("%d",&d);
 printf("result %d",add(c,d));
 getch();
 }
/*
void main(){
  int a,b,n=0,i;
  clrscr();
  printf("Enter first number : ");
  scanf("%d",&a);
  printf("Enter second number : ");
  scanf("%d",&b);
  for(i=0;i<b;i++){
   n=n+a;
  }
  printf("result is %d",n);
  getch();
 }
 */
