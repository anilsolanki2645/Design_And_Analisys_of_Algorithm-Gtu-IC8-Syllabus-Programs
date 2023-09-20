#include<stdio.h>
#include<conio.h>

int fact(int a){
	if(a == 0 || a == 1){
		return 1;
	}	
	else{
		return a * fact(a-1);
	}
}

void main(){
	int n,r,p;
	printf("total number of objects in the set : ");
	scanf("%d",&n);
	printf("number of choosing objects from the set : ");
	scanf("%d",&r);
	
	p = fact(n)/fact(n-r);
	
	printf("permutation :  %d ",p);
	
}
