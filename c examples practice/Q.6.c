#include<stdio.h>
int main(){
	int data[10]={12,4,56,5,56,3,78,31,57,19};
	int i,j,temp1,temp2;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(data[i]>data[j]){
				temp1=data[j];
				temp2=data[i];
				data[i]=temp1;
				data[j]=temp2;
			}
		}
	}
	
	int k;
	for(k=0;k<10;k++){
		printf("%d ",data[k]);
	}
	return 0;
}
