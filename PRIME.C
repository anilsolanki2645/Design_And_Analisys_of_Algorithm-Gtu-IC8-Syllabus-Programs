/*#include<stdio.h>
#include<conio.h>
void main(){
 int ans, n, i;
 clrscr();
 printf("Enter number");
 scanf("%d",&n);
 for(i=2;i<=n/2;i++){
  ans = n%i;
  if(ans==0){
   printf("Given number %d id not prime number",n);
   getch();
   goto end;
   }
  }
  printf("Given number %d is prime",n);
  end:
  getch();
 }*/

//recursve function
#include<stdio.h>
#include<math.h>
int CheckPrime(int i,int num)
{
    if(num==i)
        return 0;
    else
	if(num%i==0)
	    return 1;
    else{
	return CheckPrime(i+1,num);
    }
}
void main()
{
    int num;
    clrscr();
    printf("Enter your Number:");
    scanf("%d",&num);

    if(CheckPrime(2,num)==0)
	printf("It is a Prime Number.");
    else
	printf("It is not a Prime Number.");
getch();
}