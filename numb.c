#include<stdio.h>
#include<conio.h>

int temp(int a)
{  if (a==1)
    return 1;
    else
    return(1+temp(a-1));
}

void main(){
	int val=5,i;
//for(i=1;i<val;i++)

for(i=5;i>=1;i--)
		printf("%d  ",temp(i));
}
