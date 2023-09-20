#include<stdio.h>
#include<conio.h>

void bubblesort(int array[],int size){
	int i,j;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i;j++){
			if(array[j] > array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

void printArray(int array[],int size){
	int i;
	for(i = 0; i < size; i++){
		printf("\t %d ",array[i]);
	}
}

int main(){
	int data[10];
	int size = sizeof(data)/sizeof(data[0]);
	int i;
	
	printf("Enter Element ");
	for(i=0;i<size;i++){
	scanf("%d",&data[i]);
	}
	
	bubblesort(data,size);
	printArray(data,size);
	
	return 1;
}
