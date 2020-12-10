#include<stdio.h>

int main(){
	int p,q,*r,*s,sum;
	printf("Enter value for p and q:\n");
	scanf("%d %d",&p,&q);
	r=&p;
	s=&q;
	sum= *r+*s;
	printf("Sum =%d",sum);
}
