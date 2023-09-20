#include<stdio.h>
#include<conio.h>
int product(int,int);
void main(){
 int a,b,res;
 clrscr();
 printf("Enter two number to find product : ");
 scanf("%d  %d",&a,&b);
 res = product(a,b);
 printf("product is = %d",res);
 getch();
}

int product(int a, int b){
 if(b!=0){
  return (a+product(a,b-1));
 }
 else{
  return 0;
 }
}