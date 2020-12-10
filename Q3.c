#include<stdio.h>

int main(){
	int a,b,*x,*y,*max;
	printf("Enter Two Numbers:\n");
	scanf("%d %d",&a,&b);
	x=&a;
	y=&b;
	if(*x>*y){
		max=x;
		printf("The largest nmuber is : %d",*max);
	}
	else{
		max=y;
		printf("The largest nmuber is : %d",*max);
	}
	
	
}
