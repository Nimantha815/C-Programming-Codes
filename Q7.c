#include<stdio.h>
void swap(int*,int*,int*);
int main()
{
int a=10,b=20,c=30;
printf("Before swapping value of a=%d, value of b=%d and value of c=%d\n",a,b,c);
swap(&a,&b,&c);
printf("After swapping value of a=%d, value of b=%d and value of c=%d ",a,b,c);	
}
void swap(int *a,int *b,int *c)
{
	int z=*a;
	*a=*b;
	*b=*c;
	*c=z;
	
	
}
