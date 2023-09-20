#include<stdio.h>
int sum=0,rem;

/*void main(){
   int num,res;
   printf("enter number:\n");
   scanf("%d",&num);
   while(num!=0){
   	rem=num%10;
    sum=sum*10+rem;
    num=num/10;
   }
   printf("%d",sum);
}*/

void main(){
   int num,res;
   printf("enter number:\n");
   scanf("%d",&num);
   res=rev(num);
   printf("the number after reverse :%d",res);
}

int rev(int num){
   if(num!=0){
      rem=num%10;
      sum=sum*10+rem;
      rev(num/10);
   }
   else
      return sum;
return sum;
}
