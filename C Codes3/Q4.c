#include<stdio.h>
int main(){
	int score[5];
	int x,max;
	for(x=0;x<5;x++){
		printf("Input mark %d :",x+1);
		scanf("%d",&score[x]);
		if(max<score[x])
			max=score[x];
	}
	x=0;
	for(x=0;x<5;x++){
		if(score[x]>max-10)
			printf("Grade for %d is 'A'\n",score[x]);
		else if(score[x]>max-20)
			printf("Grade for %d is 'B'\n",score[x]);
		else if(score[x]>max-30)
			printf("Grade for %d is 'C'\n",score[x]);
		else if(score[x]>max-40)
			printf("Grade for %d is 'D'\n",score[x]);
		else
			printf("Grade for %d is 'F'\n",score[x]);
	}
	
	
	return 0;
}
