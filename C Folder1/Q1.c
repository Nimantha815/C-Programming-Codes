#include<stdio.h>

int addition(int,int);

int main(){
	int n,m;
	printf("Enter Two Numbers For Addition\n");
	scanf("%d %d",&n,&m);
	addition(n,m);
	
	
	
	
}

int addition(int n, int m){
	int sum;
	sum= n+m;
	printf("Sum = %d",sum);
}
