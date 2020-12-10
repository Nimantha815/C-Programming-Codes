#include<stdio.h>
int main()
{
	int arr[]={1,2,12,22,4};
	int sum=0,i;
	int *ptr=arr;
	for(i=0;i<5;i++)
	{
		sum+=*(ptr+i);
	}
	printf("Sum of array element=%d",sum);
}
