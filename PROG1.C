#include<stdio.h>
#include<conio.h>

float sqt(float n){
 float sqt=n/2;
 float temp=0;
 while(sqt!=temp){
  temp=sqt;
  sqt=(n/temp+temp)/2;
 }
 return sqt;
}
void main(){
 float n;
 float sq;
 clrscr();
 printf("Enter the no :  ");
 scanf("%f",&n);
 sq=sqt(n);
 printf("\nsqure root %f",sq);
 sq*=sq;
 printf("\n%f",sq);
 getch();
}