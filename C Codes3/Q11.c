#include<stdio.h>
#include<string.h>

int main(){
	char array[8];
	int count=0,i;
	printf("Enter your Registration number:\n");
	scanf("%s",&array);
	int n=strlen(array);
	if(n==8){
		printf("First Condition Satisfies.\n");
	}
	if(array[0]=='S'){
		printf("Second Condition Satisfies.\n");
	}
	for(i=0;i<8;i++){
		if(array[i]=='/'){
			count++;
			//printf("%d\n",count);
			if(count==2){
				printf("Third Condition Satisfies.\n");
			}
			else{
				printf("Invalid Regitration Number.\n");
			}
		}
		
	}
}
