#include<stdio.h>
#include<conio.h>
int fibo(int);
void main(){
 int n,i;
 clrscr();
 printf("Enter number : ");
 scanf("%d",&n);
 for(i=0;i<=n;i++){
 printf("%d",fibo(i));
 }
 getch();
}

int fibo(a){

}


/*void main(){
 int i,n,first=0,sec=1,res=0;
 clrscr();
 printf("Enter number : ");
 scanf("%d",&n);
 for(i=0;i<=n;i++){
  if(i<2){
  res=i;
  }
  else{
   res=first+sec;
   first=sec;
   sec=res;
  }
  printf(" %d",res);
 }
 getch();
} */
