#include<stdio.h>
int inc();
int main(){
	inc();
	
	
}
int inc(){
	int i=0;
	int count=1;
	while(i<=9){
		i*count;
		i++;
		count++;
		
	}
	printf("Count: %d",count);
	
	
}
