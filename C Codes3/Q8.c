#include<stdio.h>
int main(){
	int arr[5]={50, 2, 1, 9, 0},x;
	
	int i,j,temp1,temp2;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(arr[i]>arr[j]){
				temp1=arr[j];
				temp2=arr[i];
				arr[i]=temp1;
				arr[j]=temp2;
			}
		}
	}
	
	for(x=0;x<5;x++){
		printf("%d",arr[x]);
	}
	
	
	return 0;
}
