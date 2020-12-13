#include<stdio.h>

int main()
{
	int i,j,n;
	int array[11]={10,11,12,13,14,15,16,17,18,19,20};
	int count=0;
	for(i=0;i<11;i++)
	{
		int n=array[i];
		while(n!=0){
			if(n%10==2)
				count++;
			n=n/10;
		}
		
	}

	printf("The number of 2's is  %d ",count);

}
