#include<stdio.h>
void sort(int n,int *ptr)
{
     int i,j,temp;
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(*(ptr+j)<*(ptr+i))
			{
			    temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
			    *(ptr+j)=temp;
			}
		}
		
	}
	printf("After sorted array element= ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(ptr+i));
	}
}
int main()
{
	
	int arr[]={1,20,21,10,3};
	int n=5;
	sort(n,arr);
}


