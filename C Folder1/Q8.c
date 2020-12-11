#include<stdio.h>
int GCD();
int main(){
	int n,m;
	printf("Enter Two value for find the GCD\n");
	scanf("%d %d", &n,&m);
	GCD(n,m);
}
int GCD(int n,int m){
	int i,gcd;
	for(i=1;i<=n && i<=m;++i){
		if(n%i==0 && m%i==0){
			gcd=i;
		}
	}
	printf("GCD of %d and %d is %d",n,m,gcd);
}
