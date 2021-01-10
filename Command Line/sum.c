#include<stdio.h>

int main(){
	int n, i;
	float sum=0, j=0;
	printf("Enter input = ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		sum = sum + (1/(j+1));
		j++;
	}
	
	printf("%.2f", sum);
	
	return 0;
}
