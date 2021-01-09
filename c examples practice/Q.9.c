#include<stdio.h>
int main(){
	int arr[10],x,c=0;
	for(x=0;x<10;x++){
		printf("Input value %d :",x+1);
		scanf("%d",&arr[x]);
		int n=arr[x];
		while(n!=0){
			if(n%10==2)
				c++;
			n=n/10;
		}
	}
	printf("%d ",c);
	
	return 0;
}
