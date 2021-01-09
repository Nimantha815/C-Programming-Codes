#include<stdio.h>
int main(){
	float data[10]={6.0, 4.4, 1.9, 2.9, 3.4, 2.9, 3.5, 2.3, 7.5, 4.8};
	int i,j;
	float temp1,temp2;
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
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
		printf("%.1f   ",data[k]);
	}
	return 0;
}
