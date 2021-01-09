#include<stdio.h>
int main(){
	int mark[5];
	int x,max;
	for(x=0;x<5;x++){
		printf("Input mark %d :",x+1);
		scanf("%d",&mark[x]);
		if(max<mark[x])
			max=mark[x];
	}
	x=0;
	for(x=0;x<5;x++){
		if(mark[x]>max-10)
			printf("Grade for %d is 'A'\n",mark[x]);
		else if(mark[x]>max-20)
			printf("Grade for %d is 'B'\n",mark[x]);
		else if(mark[x]>max-30)
			printf("Grade for %d is 'C'\n",mark[x]);
		else if(mark[x]>max-40)
			printf("Grade for %d is 'D'\n",mark[x]);
		else
			printf("Grade for %d is 'F'\n",mark[x]);
	}
	
	
	return 0;
}
