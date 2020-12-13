#include<stdio.h>

void bubblesort(double array[],double n){
	int i,j;
	double tmp;
	for(i=0;i<10;i++){
		for(j=0;j<10-i-1;j++){
			if(array[j]>array[j+1]){
				tmp=array[j];
				array[j]=array[j+1];
				array[j+1]=tmp;
			}
		}
	}
	printf("Sorted Array: ");
    for(i=0;i<10;i++)
    {
        printf("%.1f ",array[i]);
    }
}

int main(){
	int i;
	double array[10]={6.0,4.4,1.9,2.9,3.4,2.9,3.5,2.3,7.5,4.8};
	printf("Inserted Array:");
	for(i=0;i<10;i++){
		printf("%.1f ",array[i]);
		
	}
	printf("\n");
	double n=10;
	bubblesort(array,n);
}
