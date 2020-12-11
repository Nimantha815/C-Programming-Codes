#include<stdio.h>
long int fact();
int main(){
	
	int n;
	int i=1;
	printf("Enter your Number:\n");
	scanf("%d",&n);
	
	fact(n);
	printf("%ld\n",fact(n));

}
long int fact(int n){
	
	if(n>=1){
		return n*fact(n-1);
		
	}
	else {
		return 1;
	}
	
}
