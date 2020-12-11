#include<stdio.h>

int main(){
	int ch1,ch2;
	printf(" Choise=1 Rock.\n Choise=2 Paper.\n Choise=3 Scissor\n");
	printf("Enter the choice Player1: \n");
	scanf("%d",&ch1);
	printf("Enter the choice Player2: \n");
	scanf("%d",&ch2);
	
	if(ch1==1){
		if(ch2==1){
			printf("Same choise and Match Tie.\n");
		}
		else if(ch2==2){
			printf("Player2 is won\n");
		}
		else if(ch2==3){
			printf("Player1 is won\n");
		}
		else{
			printf("Invalid Choise From Player2\n");
		}
	}
	else if(ch1==2){
		if(ch2==2){
			printf("Same choise and Match Tie.\n");
		}
		else if(ch2==1){
			printf("Player1 is won\n");
		}
		else if(ch2==3){
			printf("Player2 is won\n");
		}
		else{
			printf("Invalid Choise From Player2\n");
	}
}
	else if(ch1==3){
		if(ch2==3){
			printf("Same choise and Match Tie.\n");
		}
		else if(ch2==1){
			printf("Player2 is won\n");
		}
		else if(ch2==2){
			printf("Player1 is won\n");
		}
		else{
			printf("Invalid Choise From Player2\n");
	}
}
}

