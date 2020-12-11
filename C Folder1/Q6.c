#include<stdio.h>
int fact(int);
int main(){
	int nCr,n,r;
	printf("Enter Value For n & r:\n");
	scanf("%d %d",&n,&r);
	nCr=fact(n)/(fact(r)*fact(n-r));
	printf("nCr of if n=%d & r=%d = %d\n",n,r,nCr);
}

int fact(int x){
	int i=1;
	while(x!=0){
		i=x*i;
		x--;
	}
}

