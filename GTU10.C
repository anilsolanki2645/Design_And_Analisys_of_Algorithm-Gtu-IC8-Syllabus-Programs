// C code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1
/*
#include<stdio.h>
#include<conio.h>
int search(int arr[5], int n, int x)
{
	int i;
	for (i = 0; i < n; i++){
	if (arr[i] == x)
	return i;
	}
	return -1;
}

// Driver code
void main(void)
{
	int arr[5];
	int x,j,result;
	int n = 5; //sizeof(arr) / sizeof(arr[0]);
	clrscr();
	printf("Enter Elements");
	for(j=0;j<n;j++){
	 scanf("%d",&arr);
	}
	printf("enter element to search ");
	scanf("%d",&x);
	//Function call
	result = search(arr, n, x);
	(result == -1)
		?printf("Element is not present in array")
		:printf("Element is present at index",result);
	printf("%d",result);
	getch();
} */

#include<stdio.h>
#include<conio.h>
void main(){
 int arr[] = {2,3,4,5,6};
 int n = sizeof(arr)/sizeof(arr[0]);
 int x = 5;
 int i,flag=0;
 clrscr();
 for(i=0;i<=n;i++){
  if(arr[i] == x){
   flag=1;
  }
 }
 if(flag==1){
  printf("element present in array a[%d] = %d",i,arr[i]);
 }
 else{
 printf("not present");
 }
 getch();
}
