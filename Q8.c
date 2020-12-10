#include<stdio.h>
int factorial(int*);
int main()
{	int n,*p;
	printf("Enter if you want to number= ");
	scanf("%d",&n);
	p=&n;
	int fact=factorial(*p);	
	printf("%d Factorial value is =%d",*p,fact);
}
int factorial(int *n)
{
	if(*n==1)
	  return 1;
	else
	  return (*n)*(*factorial(n-1));
	
}
