#include<stdio.h>

int main(){
	int mul[10][10];
	
	printf("*******MULTIPLICATION TABLE*********\n");
	int i,j;
	for(i=1;i<=10;i++){
		printf("\n");
		for(j=1;j<=10;j++){
			mul[i][j]=i*j;
			
			printf("%d\t",mul[i][j]);
				
			
		}
	}
	
}
