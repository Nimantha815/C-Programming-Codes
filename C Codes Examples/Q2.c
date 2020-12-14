#include<stdio.h>

struct dis{
	int feet;
	float inch;
}d1,d2,res;

int main(){
	
		printf("Enter 1st Distanse\n");
		printf("Enter feet:\n");
		scanf("%d",&d1.feet);
		printf("Enter Inch:\n");
		scanf("%f",&d1.inch);
		
		printf("Enter 2nd Distanse\n");
		printf("Enter feet:\n");
		scanf("%d",&d2.feet);
		printf("Enter Inch:\n");
		scanf("%f",&d2.inch);
		
		res.feet= d1.feet + d2.feet;
		res.inch= d1.inch + d2.inch;
		
		while(res.inch>12.0){
			res.inch=res.inch-12.0;
			++res.feet;
		}
		printf("Sum of Distances: feet %d\'inch %.1f\"",res.feet,res.inch);
			
		
		
}
