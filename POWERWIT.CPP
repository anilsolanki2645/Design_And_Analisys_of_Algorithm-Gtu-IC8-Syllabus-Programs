#include<stdio.h>
#include<conio.h>
void main()
{
int res,x,n,i,y;
int pow(int x,int n);
clrscr();
printf("enter number:");
scanf("%d",&x);
printf("enter power:");
scanf("%d",&n);

res=pow(x,n);
printf("result is %d",res);
getch();
}
pow(int x,int n)
{
if(n==0)
return 1;
else if(n%2==0)
{
int y=pow(x,n/2);
return y*y;
}
