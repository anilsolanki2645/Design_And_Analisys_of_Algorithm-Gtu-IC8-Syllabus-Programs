#include<stdio.h>
#include<conio.h>
void main(){
 int n,pow,i;
 int res=1;
 clrscr();
 printf("Entter number : ");
 scanf("%d",&n);
 printf("enter pow : ");
 scanf("%d",&pow);
 for(i=1;i<=pow;i++){
 res=res*n;
 }
 printf("pow = %d",res);
 getch();
}