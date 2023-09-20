#include<stdio.h>
#include<conio.h>

int main() {    
int mid,l,h,i;
int array[10];
int x;
int n = sizeof(array)/sizeof(array[10]);
printf("Enter Element : \n");
for(i=0;i<n;i++){
scanf("%d",&array[i]);
    
}
    
/*for(i=0;i<n;i++){
        printf("\n%d",array[i]);
    }*/
    
    
printf("\nEnter Element : ");
    
scanf("%d",&x);
    
    
l = 0;
    
h = n-1;
    
mid = (l + h)/2;
    
//printf("%d %d",l ,h);
    
while(l <= h){
        
//printf("%d",array[mid]);
        
if(x>array[mid]){
            
l = mid+1;
        
}
        
        
else if(x == array[mid]){
            
printf("key : %d -- index : %d",x, mid);
            
break;
        
}
        
        
else
            
h = mid-1;
            
mid = (l + h)/2;
    
}
        
if(l>h)
            
printf("element not found");

return 0;

}
