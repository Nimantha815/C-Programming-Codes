#include<stdio.h>

int main(){
	int i, n;
	float sum=1, j=0;
	printf("Enter input = ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		sum = sum + j/(j+1);
		j++;
	}
	printf("%.2f", sum);
	
	return 0;
}
