#include<stdio.h>
#include<conio.h>

void main(){
	int n,p,r,i,res, resR;
	printf("total number of objects in the set : ");
	scanf("%d",&n);
	printf("number of choosing objects from the set : ");
	scanf("%d",&r);
	res = n;
	resR = n-r; 
	for(i=n-1;i>0;i--){
		res = res * i;
	}
	printf("factorial of Total number %d ",res);
	for(i=(n-r)-1;i>0;i--){
		resR = resR * i;
	}	
	printf("\nfactorial of R %d  ",resR);
	
	printf("\npermutation  :  %d ",(res/resR));
}
