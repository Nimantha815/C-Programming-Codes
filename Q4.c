#include<stdio.h>
int main()
{
	int a[100],*p,i,n;
	p=a;
	printf("Enter size of array: \n");
	scanf("%d",&n);
	printf("Enter elements of array: \n");

		for(i=0;i<n;++i){
			scanf("%d",p+i);
		}
		for(i=0;i<n;++i){
			printf("%d ",*(p+i));
		}
}


