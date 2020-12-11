#include<stdio.h>
int T20(float, int);
int main(){
	float r;
	int o;
	printf("Enter the runrate: \n");
	scanf("%f",&r);
	printf("Number of overs played:\n");
	scanf("%d",&o);
	
	
	T20(r,o);
	
}
int T20(float r,int o){
	float pre;
	pre= r*o +(20-o)*r;
	printf("Current Run Rate Predict Score: %.1f\n",pre);
	
	float r1,pro;
	
	printf("Enter the project Run Rate:\n");
	scanf("%f",&r1);
	
	pro = r*o  + r1*(20-o);
	
	printf("Projected score run rate %.1f: %.1f\n",r1,pro);
	
	
	
}
