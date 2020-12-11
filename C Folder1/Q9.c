#include<stdio.h>
int po(int, int);
int main(){
	int a,b;
	printf("Enter Two value :\n");
	scanf("%d %d",&a,&b);
	po(a,b);
}

int po(int a, int b){
	if(a>b){
		int i,sum=0;
		
		for(i=b;i<=a;i++){
			
			sum = sum + i*i;
			
			
		}
		printf("%d",sum);
		
	}
	else{
		int i,sum=0;
		for(i=a;i<=b;i++){
			
			sum= sum + i*i;
			
			
		}
		printf("%d",sum);
	}
}
